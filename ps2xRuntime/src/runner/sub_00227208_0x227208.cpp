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

// Function: sub_00227208
// Address: 0x227208 - 0x227258
void sub_00227208_0x227208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227208_0x227208");
#endif

    switch (ctx->pc) {
        case 0x227230u: goto label_227230;
        default: break;
    }

    ctx->pc = 0x227208u;

    // 0x227208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22720c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22720cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x227210: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x227210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227214: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x227214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x227218: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22721c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22721cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x227220: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x227220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227224: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x227224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x227228: 0xc089da8  jal         func_2276A0
    ctx->pc = 0x227228u;
    SET_GPR_U32(ctx, 31, 0x227230u);
    ctx->pc = 0x22722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227228u;
    // 0x22722c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2276A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2276A0u, 0x227228u, 0x227230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227230u;
label_227230:
    // 0x227230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227234: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x227234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227238: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22723c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22723cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227240: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x227240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227248: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x227248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22724c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22724cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x227250: 0x8089caa  j           func_2272A8
    ctx->pc = 0x227250u;
    ctx->pc = 0x227254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227250u;
    // 0x227254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2272A8u;
    sub_002272A8_0x2272a8(rdram, ctx, runtime); return;
    ctx->pc = 0x227258u;
}
