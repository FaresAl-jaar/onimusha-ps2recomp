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

// Function: sub_0015A4B0
// Address: 0x15a4b0 - 0x15a530
void sub_0015A4B0_0x15a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A4B0_0x15a4b0");
#endif

    switch (ctx->pc) {
        case 0x15a4f4u: goto label_15a4f4;
        case 0x15a500u: goto label_15a500;
        case 0x15a518u: goto label_15a518;
        default: break;
    }

    ctx->pc = 0x15a4b0u;

    // 0x15a4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15a4b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a4b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a4bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a4c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15a4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a4c4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x15A4C4u;
    {
        const bool branch_taken_0x15a4c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4C4u;
        // 0x15a4c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4c4) {
            ctx->pc = 0x15A518u;
            goto label_15a518;
        }
    }
    ctx->pc = 0x15A4CCu;
    // 0x15a4cc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x15a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x15a4d0: 0x24427430  addiu       $v0, $v0, 0x7430
    ctx->pc = 0x15a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29744));
    // 0x15a4d4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x15A4D4u;
    {
        const bool branch_taken_0x15a4d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4D4u;
        // 0x15a4d8: 0xae2204d4  sw          $v0, 0x4D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4d4) {
            ctx->pc = 0x15A500u;
            goto label_15a500;
        }
    }
    ctx->pc = 0x15A4DCu;
    // 0x15a4dc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x15a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x15a4e0: 0x26242930  addiu       $a0, $s1, 0x2930
    ctx->pc = 0x15a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10544));
    // 0x15a4e4: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x15a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x15a4e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15a4ec: 0xc09d6a0  jal         func_275A80
    ctx->pc = 0x15A4ECu;
    SET_GPR_U32(ctx, 31, 0x15A4F4u);
    ctx->pc = 0x15A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A4ECu;
    // 0x15a4f0: 0xae2204d4  sw          $v0, 0x4D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A80u, 0x15A4ECu, 0x15A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A4F4u;
label_15a4f4:
    // 0x15a4f4: 0x26240650  addiu       $a0, $s1, 0x650
    ctx->pc = 0x15a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    // 0x15a4f8: 0xc09d2d8  jal         func_274B60
    ctx->pc = 0x15A4F8u;
    SET_GPR_U32(ctx, 31, 0x15A500u);
    ctx->pc = 0x15A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A4F8u;
    // 0x15a4fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B60u, 0x15A4F8u, 0x15A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A500u;
label_15a500:
    // 0x15a500: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x15a500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x15a504: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15a504u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15a508: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A508u;
    {
        const bool branch_taken_0x15a508 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A508u;
        // 0x15a50c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a508) {
            ctx->pc = 0x15A518u;
            goto label_15a518;
        }
    }
    ctx->pc = 0x15A510u;
    // 0x15a510: 0xc040148  jal         func_100520
    ctx->pc = 0x15A510u;
    SET_GPR_U32(ctx, 31, 0x15A518u);
    ctx->pc = 0x100520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100520u, 0x15A510u, 0x15A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A518u;
label_15a518:
    // 0x15a518: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15a518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a51c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a528: 0x3e00008  jr          $ra
    ctx->pc = 0x15A528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A528u;
        // 0x15a52c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A530u;
}
