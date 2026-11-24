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

// Function: sub_00212970
// Address: 0x212970 - 0x2129cc
void sub_00212970_0x212970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212970_0x212970");
#endif

    switch (ctx->pc) {
        case 0x212998u: goto label_212998;
        case 0x2129a8u: goto label_2129a8;
        default: break;
    }

    ctx->pc = 0x212970u;

    // 0x212970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212974: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x212974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x212978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21297c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21297cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212980: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212984: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x212984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x212988: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x212988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21298c: 0x8e021f7c  lw          $v0, 0x1F7C($s0)
    ctx->pc = 0x21298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8060)));
    // 0x212990: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x212990u;
    SET_GPR_U32(ctx, 31, 0x212998u);
    ctx->pc = 0x212994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212990u;
    // 0x212994: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x212990u, 0x212998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212998u;
label_212998:
    // 0x212998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21299c: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x21299cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x2129a0: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x2129A0u;
    SET_GPR_U32(ctx, 31, 0x2129A8u);
    ctx->pc = 0x2129A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2129A0u;
    // 0x2129a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x2129A0u, 0x2129A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2129A8u;
label_2129a8:
    // 0x2129a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2129a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2129ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2129acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2129b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2129b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2129b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2129b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2129bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2129bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2129c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2129c4: 0x807ecd0  j           func_1FB340
    ctx->pc = 0x2129C4u;
    ctx->pc = 0x2129C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2129C4u;
    // 0x2129c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB340u;
    sub_001FB340_0x1fb340(rdram, ctx, runtime); return;
    ctx->pc = 0x2129CCu;
}
