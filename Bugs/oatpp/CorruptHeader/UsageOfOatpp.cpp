shared_ptr<oatpp::web::server::HttpRequestHandler::OutgoingResponse> DownloadRequestHandler::handle(
  const std::shared_ptr<IncomingRequest>& request)
{
  oatpp::String bytes(oatpp::base::StrBuffer::loadFromFile("Blocks\\01d6403becf973ecab3de90093b82e07.zip"));
  shared_ptr<OutgoingResponse> response = ResponseFactory::createResponse(Status::CODE_200, bytes);
  response->putHeader("Content-Type", "application/zip");
  response->putHeader("Content-Disposition", "attachment; filename=\"01d6403becf973ecab3de90093b82e07.zip\"");
  return response;
}