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

// Function: sub_00119248
// Address: 0x119248 - 0x1192c4
void sub_00119248_0x119248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119248_0x119248");
#endif

    switch (ctx->pc) {
        case 0x11925cu: goto label_11925c;
        case 0x1192b0u: goto label_1192b0;
        default: break;
    }

    ctx->pc = 0x119248u;

    // 0x119248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11924c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11924cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119250: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119254: 0xc046028  jal         func_1180A0
    ctx->pc = 0x119254u;
    SET_GPR_U32(ctx, 31, 0x11925Cu);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x119254u, 0x11925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11925Cu;
label_11925c:
    // 0x11925c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11925cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x119260: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x119260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x119264: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x119264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x119268: 0x9c700000  lwu         $s0, 0x0($v1)
    ctx->pc = 0x119268u;
    SET_GPR_ZE32(ctx, 16, runtime->Load32(rdram, ctx, 0x10001000u));
    // 0x11926c: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x11926cu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x119270: 0xdc8a4148  ld          $t2, 0x4148($a0)
    ctx->pc = 0x119270u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x404148u));
    // 0x119274: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x119274u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x119278: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119278u;
    {
        const bool branch_taken_0x119278 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x11927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119278u;
        // 0x11927c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119278) {
            ctx->pc = 0x119288u;
            goto label_119288;
        }
    }
    ctx->pc = 0x119280u;
    // 0x119280: 0x9c700000  lwu         $s0, 0x0($v1)
    ctx->pc = 0x119280u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119284: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x119284u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_119288:
    // 0x119288: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x119288u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x11928c: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x11928cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x119290: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x119290u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x119294: 0x20a8025  or          $s0, $s0, $t2
    ctx->pc = 0x119294u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 10));
    // 0x119298: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x119298u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x11929c: 0x1308014  dsllv       $s0, $s0, $t1
    ctx->pc = 0x11929cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x1192a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1192A0u;
    {
        const bool branch_taken_0x1192a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1192A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192A0u;
        // 0x1192a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192a0) {
            ctx->pc = 0x1192B4u;
            goto label_1192b4;
        }
    }
    ctx->pc = 0x1192A8u;
    // 0x1192a8: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x1192A8u;
    SET_GPR_U32(ctx, 31, 0x1192B0u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x1192A8u, 0x1192B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1192B0u;
label_1192b0:
    // 0x1192b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1192b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1192b4:
    // 0x1192b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1192b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1192b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1192b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1192bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1192BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1192C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192BCu;
        // 0x1192c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1192BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1192C4u;
}
