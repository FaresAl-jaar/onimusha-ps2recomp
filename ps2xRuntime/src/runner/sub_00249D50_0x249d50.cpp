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

// Function: sub_00249D50
// Address: 0x249d50 - 0x249ec8
void sub_00249D50_0x249d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249D50_0x249d50");
#endif

    switch (ctx->pc) {
        case 0x249da0u: goto label_249da0;
        case 0x249dc0u: goto label_249dc0;
        case 0x249dd0u: goto label_249dd0;
        case 0x249df0u: goto label_249df0;
        case 0x249e00u: goto label_249e00;
        case 0x249e08u: goto label_249e08;
        case 0x249e20u: goto label_249e20;
        case 0x249e30u: goto label_249e30;
        case 0x249e3cu: goto label_249e3c;
        case 0x249e58u: goto label_249e58;
        case 0x249e60u: goto label_249e60;
        default: break;
    }

    ctx->pc = 0x249d50u;

    // 0x249d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x249d54: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x249d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x249d58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x249d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x249d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x249d60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x249d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x249d64: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x249d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x249d68: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x249D68u;
    {
        const bool branch_taken_0x249d68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x249D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D68u;
        // 0x249d6c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d68) {
            ctx->pc = 0x249D80u;
            goto label_249d80;
        }
    }
    ctx->pc = 0x249D70u;
    // 0x249d70: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x249d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x249d74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x249D74u;
    {
        const bool branch_taken_0x249d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D74u;
        // 0x249d78: 0x24a5d3f8  addiu       $a1, $a1, -0x2C08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d74) {
            ctx->pc = 0x249DB8u;
            goto label_249db8;
        }
    }
    ctx->pc = 0x249D7Cu;
    // 0x249d7c: 0x0  nop
    ctx->pc = 0x249d7cu;
    // NOP
label_249d80:
    // 0x249d80: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x249D80u;
    {
        const bool branch_taken_0x249d80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D80u;
        // 0x249d84: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d80) {
            ctx->pc = 0x249D98u;
            goto label_249d98;
        }
    }
    ctx->pc = 0x249D88u;
    // 0x249d88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x249d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x249D8Cu;
    {
        const bool branch_taken_0x249d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D8Cu;
        // 0x249d90: 0x24a5d420  addiu       $a1, $a1, -0x2BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d8c) {
            ctx->pc = 0x249DB8u;
            goto label_249db8;
        }
    }
    ctx->pc = 0x249D94u;
    // 0x249d94: 0x0  nop
    ctx->pc = 0x249d94u;
    // NOP
label_249d98:
    // 0x249d98: 0xc09273e  jal         func_249CF8
    ctx->pc = 0x249D98u;
    SET_GPR_U32(ctx, 31, 0x249DA0u);
    ctx->pc = 0x249CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249CF8u, 0x249D98u, 0x249DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DA0u;
label_249da0:
    // 0x249da0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x249da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249da4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x249DA4u;
    {
        const bool branch_taken_0x249da4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x249DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DA4u;
        // 0x249da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249da4) {
            ctx->pc = 0x249DC8u;
            goto label_249dc8;
        }
    }
    ctx->pc = 0x249DACu;
    // 0x249dac: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x249dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x249db0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x249db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249db4: 0x24a5d448  addiu       $a1, $a1, -0x2BB8
    ctx->pc = 0x249db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956104));
label_249db8:
    // 0x249db8: 0xc0925d4  jal         func_249750
    ctx->pc = 0x249DB8u;
    SET_GPR_U32(ctx, 31, 0x249DC0u);
    ctx->pc = 0x249750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249750u, 0x249DB8u, 0x249DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DC0u;
label_249dc0:
    // 0x249dc0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x249DC0u;
    {
        const bool branch_taken_0x249dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DC0u;
        // 0x249dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249dc0) {
            ctx->pc = 0x249EB0u;
            goto label_249eb0;
        }
    }
    ctx->pc = 0x249DC8u;
label_249dc8:
    // 0x249dc8: 0xc092ba4  jal         func_24AE90
    ctx->pc = 0x249DC8u;
    SET_GPR_U32(ctx, 31, 0x249DD0u);
    ctx->pc = 0x249DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249DC8u;
    // 0x249dcc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AE90u, 0x249DC8u, 0x249DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DD0u;
label_249dd0:
    // 0x249dd0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x249dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x249dd4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x249DD4u;
    {
        const bool branch_taken_0x249dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DD4u;
        // 0x249dd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249dd4) {
            ctx->pc = 0x249E68u;
            goto label_249e68;
        }
    }
    ctx->pc = 0x249DDCu;
    // 0x249ddc: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x249ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x249de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249de4: 0x24520fd0  addiu       $s2, $v0, 0xFD0
    ctx->pc = 0x249de4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4048));
    // 0x249de8: 0xc092966  jal         func_24A598
    ctx->pc = 0x249DE8u;
    SET_GPR_U32(ctx, 31, 0x249DF0u);
    ctx->pc = 0x249DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249DE8u;
    // 0x249dec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A598u, 0x249DE8u, 0x249DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DF0u;
label_249df0:
    // 0x249df0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x249df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x249df4: 0x2484d478  addiu       $a0, $a0, -0x2B88
    ctx->pc = 0x249df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956152));
    // 0x249df8: 0xc08d460  jal         func_235180
    ctx->pc = 0x249DF8u;
    SET_GPR_U32(ctx, 31, 0x249E00u);
    ctx->pc = 0x249DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249DF8u;
    // 0x249dfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x249DF8u, 0x249E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E00u;
label_249e00:
    // 0x249e00: 0xc0926ae  jal         func_249AB8
    ctx->pc = 0x249E00u;
    SET_GPR_U32(ctx, 31, 0x249E08u);
    ctx->pc = 0x249E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E00u;
    // 0x249e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249AB8u, 0x249E00u, 0x249E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E08u;
label_249e08:
    // 0x249e08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x249e08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249e0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x249e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249e10: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x249E10u;
    {
        const bool branch_taken_0x249e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E10u;
        // 0x249e14: 0xfe030008  sd          $v1, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e10) {
            ctx->pc = 0x249EB0u;
            goto label_249eb0;
        }
    }
    ctx->pc = 0x249E18u;
    // 0x249e18: 0xc091a44  jal         func_246910
    ctx->pc = 0x249E18u;
    SET_GPR_U32(ctx, 31, 0x249E20u);
    ctx->pc = 0x249E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E18u;
    // 0x249e1c: 0x24044900  addiu       $a0, $zero, 0x4900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249E18u, 0x249E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E20u;
label_249e20:
    // 0x249e20: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x249e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x249e24: 0x8c451110  lw          $a1, 0x1110($v0)
    ctx->pc = 0x249e24u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4D1110u));
    // 0x249e28: 0xc091b08  jal         func_246C20
    ctx->pc = 0x249E28u;
    SET_GPR_U32(ctx, 31, 0x249E30u);
    ctx->pc = 0x249E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E28u;
    // 0x249e2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C20u, 0x249E28u, 0x249E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E30u;
label_249e30:
    // 0x249e30: 0x24044901  addiu       $a0, $zero, 0x4901
    ctx->pc = 0x249e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18689));
    // 0x249e34: 0xc091a44  jal         func_246910
    ctx->pc = 0x249E34u;
    SET_GPR_U32(ctx, 31, 0x249E3Cu);
    ctx->pc = 0x249E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E34u;
    // 0x249e38: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249E34u, 0x249E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E3Cu;
label_249e3c:
    // 0x249e3c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x249e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x249e40: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x249E40u;
    {
        const bool branch_taken_0x249e40 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x249e40) {
            ctx->pc = 0x249E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249E40u;
            // 0x249e44: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249E7Cu;
            goto label_249e7c;
        }
    }
    ctx->pc = 0x249E48u;
    // 0x249e48: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x249e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x249e4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x249e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249e50: 0xc0925d4  jal         func_249750
    ctx->pc = 0x249E50u;
    SET_GPR_U32(ctx, 31, 0x249E58u);
    ctx->pc = 0x249E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E50u;
    // 0x249e54: 0x24a5d4a0  addiu       $a1, $a1, -0x2B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249750u, 0x249E50u, 0x249E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E58u;
label_249e58:
    // 0x249e58: 0xc09274c  jal         func_249D30
    ctx->pc = 0x249E58u;
    SET_GPR_U32(ctx, 31, 0x249E60u);
    ctx->pc = 0x249E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E58u;
    // 0x249e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D30u, 0x249E58u, 0x249E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E60u;
label_249e60:
    // 0x249e60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x249E60u;
    {
        const bool branch_taken_0x249e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E60u;
        // 0x249e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e60) {
            ctx->pc = 0x249EB0u;
            goto label_249eb0;
        }
    }
    ctx->pc = 0x249E68u;
label_249e68:
    // 0x249e68: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x249e68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x249e6c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x249e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249e70: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x249e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x249e74: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x249e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x249e78: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x249e78u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_249e7c:
    // 0x249e7c: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x249e7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x249e80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249e84: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x249e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x249e88: 0x646307ff  daddiu      $v1, $v1, 0x7FF
    ctx->pc = 0x249e88u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)2047);
    // 0x249e8c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x249e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x249e90: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x249e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x249e94: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x249e94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x249e98: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x249e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x249e9c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x249e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x249ea0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x249ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x249ea4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x249ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x249ea8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x249ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x249eac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x249eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_249eb0:
    // 0x249eb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x249eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249eb4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x249eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249eb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x249eb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249ebc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x249ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x249ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x249EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EC0u;
        // 0x249ec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249EC8u;
}
