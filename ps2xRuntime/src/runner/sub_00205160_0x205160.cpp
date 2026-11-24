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

// Function: sub_00205160
// Address: 0x205160 - 0x2051ac
void sub_00205160_0x205160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205160_0x205160");
#endif

    switch (ctx->pc) {
        case 0x20518cu: goto label_20518c;
        default: break;
    }

    ctx->pc = 0x205160u;

    // 0x205160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205164: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x205164u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x205168: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20516c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20516cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205170: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x205174: 0x24c651b0  addiu       $a2, $a2, 0x51B0
    ctx->pc = 0x205174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20912));
    // 0x205178: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x205178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20517c: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x20517cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x205180: 0x8e11003c  lw          $s1, 0x3C($s0)
    ctx->pc = 0x205180u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x205184: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x205184u;
    SET_GPR_U32(ctx, 31, 0x20518Cu);
    ctx->pc = 0x205188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205184u;
    // 0x205188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x205184u, 0x20518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20518Cu;
label_20518c:
    // 0x20518c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20518cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205190: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x205190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205198: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x205198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20519c: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x20519cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2051a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2051a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2051a4: 0x8087e0e  j           func_21F838
    ctx->pc = 0x2051A4u;
    ctx->pc = 0x2051A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2051A4u;
    // 0x2051a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x2051ACu;
}
