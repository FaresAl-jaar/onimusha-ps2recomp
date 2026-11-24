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

// Function: sub_0014EFD0
// Address: 0x14efd0 - 0x14f0c8
void sub_0014EFD0_0x14efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EFD0_0x14efd0");
#endif

    ctx->pc = 0x14efd0u;

    // 0x14efd0: 0x8cc400e0  lw          $a0, 0xE0($a2)
    ctx->pc = 0x14efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x14efd4: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x14efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x14efd8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14EFD8u;
    {
        const bool branch_taken_0x14efd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14efd8) {
            ctx->pc = 0x14F018u;
            goto label_14f018;
        }
    }
    ctx->pc = 0x14EFE0u;
    // 0x14efe0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x14efe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14efe4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x14efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x14efe8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x14efe8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14efec: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14EFECu;
    {
        const bool branch_taken_0x14efec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFECu;
        // 0x14eff0: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efec) {
            ctx->pc = 0x14EFF8u;
            goto label_14eff8;
        }
    }
    ctx->pc = 0x14EFF4u;
    // 0x14eff4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14eff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14eff8:
    // 0x14eff8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14EFF8u;
    {
        const bool branch_taken_0x14eff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eff8) {
            ctx->pc = 0x14F018u;
            goto label_14f018;
        }
    }
    ctx->pc = 0x14F000u;
    // 0x14f000: 0x8ca200e0  lw          $v0, 0xE0($a1)
    ctx->pc = 0x14f000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x14f004: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14f004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14f008: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F008u;
    {
        const bool branch_taken_0x14f008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F008u;
        // 0x14f00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f008) {
            ctx->pc = 0x14F018u;
            goto label_14f018;
        }
    }
    ctx->pc = 0x14F010u;
    // 0x14f010: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x14F010u;
    {
        const bool branch_taken_0x14f010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f010) {
            ctx->pc = 0x14F0C0u;
            goto label_14f0c0;
        }
    }
    ctx->pc = 0x14F018u;
label_14f018:
    // 0x14f018: 0x8ca300e0  lw          $v1, 0xE0($a1)
    ctx->pc = 0x14f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x14f01c: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x14f01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x14f020: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14F020u;
    {
        const bool branch_taken_0x14f020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f020) {
            ctx->pc = 0x14F058u;
            goto label_14f058;
        }
    }
    ctx->pc = 0x14F028u;
    // 0x14f028: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x14f028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14f02c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x14f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x14f030: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x14f030u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14f034: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14F034u;
    {
        const bool branch_taken_0x14f034 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F034u;
        // 0x14f038: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f034) {
            ctx->pc = 0x14F040u;
            goto label_14f040;
        }
    }
    ctx->pc = 0x14F03Cu;
    // 0x14f03c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14f03cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f040:
    // 0x14f040: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F040u;
    {
        const bool branch_taken_0x14f040 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F040u;
        // 0x14f044: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f040) {
            ctx->pc = 0x14F058u;
            goto label_14f058;
        }
    }
    ctx->pc = 0x14F048u;
    // 0x14f048: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F048u;
    {
        const bool branch_taken_0x14f048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f048) {
            ctx->pc = 0x14F058u;
            goto label_14f058;
        }
    }
    ctx->pc = 0x14F050u;
    // 0x14f050: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14F050u;
    {
        const bool branch_taken_0x14f050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F050u;
        // 0x14f054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f050) {
            ctx->pc = 0x14F0C0u;
            goto label_14f0c0;
        }
    }
    ctx->pc = 0x14F058u;
label_14f058:
    // 0x14f058: 0x10a6000d  beq         $a1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x14F058u;
    {
        const bool branch_taken_0x14f058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x14f058) {
            ctx->pc = 0x14F090u;
            goto label_14f090;
        }
    }
    ctx->pc = 0x14F060u;
    // 0x14f060: 0x90c200e4  lbu         $v0, 0xE4($a2)
    ctx->pc = 0x14f060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x14f064: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14F064u;
    {
        const bool branch_taken_0x14f064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f064) {
            ctx->pc = 0x14F090u;
            goto label_14f090;
        }
    }
    ctx->pc = 0x14F06Cu;
    // 0x14f06c: 0x90a200e4  lbu         $v0, 0xE4($a1)
    ctx->pc = 0x14f06cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x14f070: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F070u;
    {
        const bool branch_taken_0x14f070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F070u;
        // 0x14f074: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f070) {
            ctx->pc = 0x14F090u;
            goto label_14f090;
        }
    }
    ctx->pc = 0x14F078u;
    // 0x14f078: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F078u;
    {
        const bool branch_taken_0x14f078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f078) {
            ctx->pc = 0x14F090u;
            goto label_14f090;
        }
    }
    ctx->pc = 0x14F080u;
    // 0x14f080: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x14f080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x14f084: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F084u;
    {
        const bool branch_taken_0x14f084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f084) {
            ctx->pc = 0x14F098u;
            goto label_14f098;
        }
    }
    ctx->pc = 0x14F08Cu;
    // 0x14f08c: 0x0  nop
    ctx->pc = 0x14f08cu;
    // NOP
label_14f090:
    // 0x14f090: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14F090u;
    {
        const bool branch_taken_0x14f090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F090u;
        // 0x14f094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f090) {
            ctx->pc = 0x14F0C0u;
            goto label_14f0c0;
        }
    }
    ctx->pc = 0x14F098u;
label_14f098:
    // 0x14f098: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x14f098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x14f09c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F09Cu;
    {
        const bool branch_taken_0x14f09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F09Cu;
        // 0x14f0a0: 0x30822000  andi        $v0, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f09c) {
            ctx->pc = 0x14F0B8u;
            goto label_14f0b8;
        }
    }
    ctx->pc = 0x14F0A4u;
    // 0x14f0a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F0A4u;
    {
        const bool branch_taken_0x14f0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f0a4) {
            ctx->pc = 0x14F0B8u;
            goto label_14f0b8;
        }
    }
    ctx->pc = 0x14F0ACu;
    // 0x14f0ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F0ACu;
    {
        const bool branch_taken_0x14f0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0ACu;
        // 0x14f0b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0ac) {
            ctx->pc = 0x14F0C0u;
            goto label_14f0c0;
        }
    }
    ctx->pc = 0x14F0B4u;
    // 0x14f0b4: 0x0  nop
    ctx->pc = 0x14f0b4u;
    // NOP
label_14f0b8:
    // 0x14f0b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f0bc: 0x0  nop
    ctx->pc = 0x14f0bcu;
    // NOP
label_14f0c0:
    // 0x14f0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x14F0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F0C8u;
}
