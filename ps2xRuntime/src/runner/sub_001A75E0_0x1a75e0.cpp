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

// Function: sub_001A75E0
// Address: 0x1a75e0 - 0x1a7694
void sub_001A75E0_0x1a75e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A75E0_0x1a75e0");
#endif

    switch (ctx->pc) {
        case 0x1a761cu: goto label_1a761c;
        case 0x1a766cu: goto label_1a766c;
        case 0x1a7680u: goto label_1a7680;
        default: break;
    }

    ctx->pc = 0x1a75e0u;

    // 0x1a75e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a75e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a75e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a75e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a75e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a75e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a75ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a75ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a75f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a75f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a75f4: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A75F4u;
    {
        const bool branch_taken_0x1a75f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75F4u;
        // 0x1a75f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75f4) {
            ctx->pc = 0x1A7680u;
            goto label_1a7680;
        }
    }
    ctx->pc = 0x1A75FCu;
    // 0x1a75fc: 0x8e237848  lw          $v1, 0x7848($s1)
    ctx->pc = 0x1a75fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30792)));
    // 0x1a7600: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7604: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1a7604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a7608: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a7608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a760c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A760Cu;
    {
        const bool branch_taken_0x1a760c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A760Cu;
        // 0x1a7610: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a760c) {
            ctx->pc = 0x1A7680u;
            goto label_1a7680;
        }
    }
    ctx->pc = 0x1A7614u;
    // 0x1a7614: 0xc0697e0  jal         func_1A5F80
    ctx->pc = 0x1A7614u;
    SET_GPR_U32(ctx, 31, 0x1A761Cu);
    ctx->pc = 0x1A5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5F80u, 0x1A7614u, 0x1A761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A761Cu;
label_1a761c:
    // 0x1a761c: 0x8e257848  lw          $a1, 0x7848($s1)
    ctx->pc = 0x1a761cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30792)));
    // 0x1a7620: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1a7620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1a7624: 0x8e22783c  lw          $v0, 0x783C($s1)
    ctx->pc = 0x1a7624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1a7628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a762c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1a762cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7630: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1a7630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1a7634: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1a7634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7638: 0x5293c  dsll32      $a1, $a1, 4
    ctx->pc = 0x1a7638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 4));
    // 0x1a763c: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x1a763cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x1a7640: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a7640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a7644: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1a7644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1a7648: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1a7648u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1a764c: 0x8e22783c  lw          $v0, 0x783C($s1)
    ctx->pc = 0x1a764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1a7650: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a7650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1a7654: 0x8e22783c  lw          $v0, 0x783C($s1)
    ctx->pc = 0x1a7654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1a7658: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1a7658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1a765c: 0x8e22783c  lw          $v0, 0x783C($s1)
    ctx->pc = 0x1a765cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1a7660: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1a7660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a7664: 0xc0697d4  jal         func_1A5F50
    ctx->pc = 0x1A7664u;
    SET_GPR_U32(ctx, 31, 0x1A766Cu);
    ctx->pc = 0x1A7668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7664u;
    // 0x1a7668: 0xae22783c  sw          $v0, 0x783C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 30780), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5F50u, 0x1A7664u, 0x1A766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A766Cu;
label_1a766c:
    // 0x1a766c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a766cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a7670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7674: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7678: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1A7678u;
    SET_GPR_U32(ctx, 31, 0x1A7680u);
    ctx->pc = 0x1A767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7678u;
    // 0x1a767c: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1A7678u, 0x1A7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7680u;
label_1a7680:
    // 0x1a7680: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a768c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A768Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A768Cu;
        // 0x1a7690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A768Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7694u;
}
