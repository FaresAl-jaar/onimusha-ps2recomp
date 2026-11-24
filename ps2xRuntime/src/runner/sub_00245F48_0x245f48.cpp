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

// Function: sub_00245F48
// Address: 0x245f48 - 0x246064
void sub_00245F48_0x245f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245F48_0x245f48");
#endif

    switch (ctx->pc) {
        case 0x245fb0u: goto label_245fb0;
        case 0x245fb8u: goto label_245fb8;
        case 0x245fc0u: goto label_245fc0;
        case 0x245fccu: goto label_245fcc;
        case 0x245fd4u: goto label_245fd4;
        case 0x245fe8u: goto label_245fe8;
        case 0x245ff0u: goto label_245ff0;
        case 0x245ffcu: goto label_245ffc;
        case 0x24603cu: goto label_24603c;
        default: break;
    }

    ctx->pc = 0x245f48u;

    // 0x245f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245f4c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x245f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x245f50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x245f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x245f54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x245f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245f5c: 0x2463e9cc  addiu       $v1, $v1, -0x1634
    ctx->pc = 0x245f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961612));
    // 0x245f60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x245f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x245f64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x245f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x245f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x245f6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4CE9CCu));
    // 0x245f70: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x245F70u;
    {
        const bool branch_taken_0x245f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F70u;
        // 0x245f74: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f70) {
            ctx->pc = 0x24604Cu;
            goto label_24604c;
        }
    }
    ctx->pc = 0x245F78u;
    // 0x245f78: 0x82240002  lb          $a0, 0x2($s1)
    ctx->pc = 0x245f78u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x245f7c: 0x54830034  bnel        $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x245F7Cu;
    {
        const bool branch_taken_0x245f7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x245f7c) {
            ctx->pc = 0x245F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245F7Cu;
            // 0x245f80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246050u;
            goto label_246050;
        }
    }
    ctx->pc = 0x245F84u;
    // 0x245f84: 0x3c12004d  lui         $s2, 0x4D
    ctx->pc = 0x245f84u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)77 << 16));
    // 0x245f88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x245f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245f8c: 0x2644e9d4  addiu       $a0, $s2, -0x162C
    ctx->pc = 0x245f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961620));
    // 0x245f90: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x245f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x245f94: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x245f94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4CE9D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CE9D4u, _value); } while (0);
    // 0x245f98: 0x2442e9c8  addiu       $v0, $v0, -0x1638
    ctx->pc = 0x245f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961608));
    // 0x245f9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x245f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4CE9C8u));
    // 0x245fa0: 0x1465000f  bne         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x245FA0u;
    {
        const bool branch_taken_0x245fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x245fa0) {
            ctx->pc = 0x245FE0u;
            goto label_245fe0;
        }
    }
    ctx->pc = 0x245FA8u;
    // 0x245fa8: 0xc094bc0  jal         func_252F00
    ctx->pc = 0x245FA8u;
    SET_GPR_U32(ctx, 31, 0x245FB0u);
    ctx->pc = 0x252F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252F00u, 0x245FA8u, 0x245FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FB0u;
label_245fb0:
    // 0x245fb0: 0xc091a44  jal         func_246910
    ctx->pc = 0x245FB0u;
    SET_GPR_U32(ctx, 31, 0x245FB8u);
    ctx->pc = 0x245FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245FB0u;
    // 0x245fb4: 0x24041400  addiu       $a0, $zero, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x245FB0u, 0x245FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FB8u;
label_245fb8:
    // 0x245fb8: 0xc0481d6  jal         func_120758
    ctx->pc = 0x245FB8u;
    SET_GPR_U32(ctx, 31, 0x245FC0u);
    ctx->pc = 0x120758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120758u, 0x245FB8u, 0x245FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FC0u;
label_245fc0:
    // 0x245fc0: 0x24041401  addiu       $a0, $zero, 0x1401
    ctx->pc = 0x245fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5121));
    // 0x245fc4: 0xc091a44  jal         func_246910
    ctx->pc = 0x245FC4u;
    SET_GPR_U32(ctx, 31, 0x245FCCu);
    ctx->pc = 0x245FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245FC4u;
    // 0x245fc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x245FC4u, 0x245FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FCCu;
label_245fcc:
    // 0x245fcc: 0xc094bde  jal         func_252F78
    ctx->pc = 0x245FCCu;
    SET_GPR_U32(ctx, 31, 0x245FD4u);
    ctx->pc = 0x252F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252F78u, 0x245FCCu, 0x245FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FD4u;
label_245fd4:
    // 0x245fd4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x245FD4u;
    {
        const bool branch_taken_0x245fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FD4u;
        // 0x245fd8: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fd4) {
            ctx->pc = 0x246000u;
            goto label_246000;
        }
    }
    ctx->pc = 0x245FDCu;
    // 0x245fdc: 0x0  nop
    ctx->pc = 0x245fdcu;
    // NOP
label_245fe0:
    // 0x245fe0: 0xc091a44  jal         func_246910
    ctx->pc = 0x245FE0u;
    SET_GPR_U32(ctx, 31, 0x245FE8u);
    ctx->pc = 0x245FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245FE0u;
    // 0x245fe4: 0x24041500  addiu       $a0, $zero, 0x1500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x245FE0u, 0x245FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FE8u;
label_245fe8:
    // 0x245fe8: 0xc0481d6  jal         func_120758
    ctx->pc = 0x245FE8u;
    SET_GPR_U32(ctx, 31, 0x245FF0u);
    ctx->pc = 0x120758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120758u, 0x245FE8u, 0x245FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FF0u;
label_245ff0:
    // 0x245ff0: 0x24041501  addiu       $a0, $zero, 0x1501
    ctx->pc = 0x245ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5377));
    // 0x245ff4: 0xc091a44  jal         func_246910
    ctx->pc = 0x245FF4u;
    SET_GPR_U32(ctx, 31, 0x245FFCu);
    ctx->pc = 0x245FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245FF4u;
    // 0x245ff8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x245FF4u, 0x245FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FFCu;
label_245ffc:
    // 0x245ffc: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x245ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_246000:
    // 0x246000: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x246000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x246004: 0x2644e9d4  addiu       $a0, $s2, -0x162C
    ctx->pc = 0x246004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961620));
    // 0x246008: 0x2442ea04  addiu       $v0, $v0, -0x15FC
    ctx->pc = 0x246008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961668));
    // 0x24600c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x24600cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x246010: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x246010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x246014: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x246014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x246018: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x246018u;
    {
        const bool branch_taken_0x246018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246018u;
        // 0x24601c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246018) {
            ctx->pc = 0x24604Cu;
            goto label_24604c;
        }
    }
    ctx->pc = 0x246020u;
    // 0x246020: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x246020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x246024: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x246024u;
    {
        const bool branch_taken_0x246024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x246028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246024u;
        // 0x246028: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246024) {
            ctx->pc = 0x246048u;
            goto label_246048;
        }
    }
    ctx->pc = 0x24602Cu;
    // 0x24602c: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x24602cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x246030: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x246030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246034: 0xc044332  jal         func_110CC8
    ctx->pc = 0x246034u;
    SET_GPR_U32(ctx, 31, 0x24603Cu);
    ctx->pc = 0x246038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246034u;
    // 0x246038: 0x2484c928  addiu       $a0, $a0, -0x36D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x246034u, 0x24603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24603Cu;
label_24603c:
    // 0x24603c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24603Cu;
    {
        const bool branch_taken_0x24603c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24603Cu;
        // 0x246040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24603c) {
            ctx->pc = 0x24604Cu;
            goto label_24604c;
        }
    }
    ctx->pc = 0x246044u;
    // 0x246044: 0x0  nop
    ctx->pc = 0x246044u;
    // NOP
label_246048:
    // 0x246048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x246048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24604c:
    // 0x24604c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24604cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246050:
    // 0x246050: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x246050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246054: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x246054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246058: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x246058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24605c: 0x3e00008  jr          $ra
    ctx->pc = 0x24605Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24605Cu;
        // 0x246060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24605Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246064u;
}
