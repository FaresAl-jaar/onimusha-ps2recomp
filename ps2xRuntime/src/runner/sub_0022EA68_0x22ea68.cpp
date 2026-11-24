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

// Function: sub_0022EA68
// Address: 0x22ea68 - 0x22ea8c
void sub_0022EA68_0x22ea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EA68_0x22ea68");
#endif

    ctx->pc = 0x22ea68u;

    // 0x22ea68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ea68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ea6c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22ea70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ea74: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x22ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x22ea78: 0xac44c368  sw          $a0, -0x3C98($v0)
    ctx->pc = 0x22ea78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4BC368u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BC368u, _value); } while (0);
    // 0x22ea7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ea7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ea80: 0xac65c36c  sw          $a1, -0x3C94($v1)
    ctx->pc = 0x22ea80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4BC36Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BC36Cu, _value); } while (0);
    // 0x22ea84: 0x8094dd0  j           func_253740
    ctx->pc = 0x22EA84u;
    ctx->pc = 0x22EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EA84u;
    // 0x22ea88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253740u;
    sub_00253740_0x253740(rdram, ctx, runtime); return;
    ctx->pc = 0x22EA8Cu;
}
