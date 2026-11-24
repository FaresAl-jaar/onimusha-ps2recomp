#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00252600
// Address: 0x252600 - 0x252630
void sub_00252600_0x252600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252600_0x252600");
#endif

    ctx->pc = 0x252600u;

    // 0x252600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x252604: 0x3c050089  lui         $a1, 0x89
    ctx->pc = 0x252604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)137 << 16));
    // 0x252608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25260c: 0x24a584c0  addiu       $a1, $a1, -0x7B40
    ctx->pc = 0x25260cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935744));
    // 0x252610: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x252610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8884C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C0u, _value); } while (0);
    // 0x252614: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x252614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x252618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25261c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25261cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252620: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x252620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252624: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x252624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252628: 0x8091ee6  j           func_247B98
    ctx->pc = 0x252628u;
    ctx->pc = 0x25262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252628u;
    // 0x25262c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    sub_00247B98_0x247b98(rdram, ctx, runtime); return;
    ctx->pc = 0x252630u;
}
