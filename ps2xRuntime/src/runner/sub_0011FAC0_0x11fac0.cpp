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

// Function: sub_0011FAC0
// Address: 0x11fac0 - 0x11fc18
void sub_0011FAC0_0x11fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FAC0_0x11fac0");
#endif

    switch (ctx->pc) {
        case 0x11fae0u: goto label_11fae0;
        case 0x11faecu: goto label_11faec;
        case 0x11fb18u: goto label_11fb18;
        case 0x11fb30u: goto label_11fb30;
        case 0x11fb44u: goto label_11fb44;
        case 0x11fb54u: goto label_11fb54;
        case 0x11fb68u: goto label_11fb68;
        case 0x11fb70u: goto label_11fb70;
        case 0x11fb90u: goto label_11fb90;
        case 0x11fba4u: goto label_11fba4;
        case 0x11fbc8u: goto label_11fbc8;
        case 0x11fbd0u: goto label_11fbd0;
        default: break;
    }

    ctx->pc = 0x11fac0u;

    // 0x11fac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11fac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11fac4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11fac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11fac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11fac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11facc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11faccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fad0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11fad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11fad4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x11fad4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x11fad8: 0xc047c72  jal         func_11F1C8
    ctx->pc = 0x11FAD8u;
    SET_GPR_U32(ctx, 31, 0x11FAE0u);
    ctx->pc = 0x11FADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FAD8u;
    // 0x11fadc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1C8u, 0x11FAD8u, 0x11FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FAE0u;
label_11fae0:
    // 0x11fae0: 0x8e0441ac  lw          $a0, 0x41AC($s0)
    ctx->pc = 0x11fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16812)));
    // 0x11fae4: 0xc04380c  jal         func_10E030
    ctx->pc = 0x11FAE4u;
    SET_GPR_U32(ctx, 31, 0x11FAECu);
    ctx->pc = 0x10E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E030u, 0x11FAE4u, 0x11FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FAECu;
label_11faec:
    // 0x11faec: 0x8e0341ac  lw          $v1, 0x41AC($s0)
    ctx->pc = 0x11faecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16812)));
    // 0x11faf0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11FAF0u;
    {
        const bool branch_taken_0x11faf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAF0u;
        // 0x11faf4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11faf0) {
            ctx->pc = 0x11FB20u;
            goto label_11fb20;
        }
    }
    ctx->pc = 0x11FAF8u;
    // 0x11faf8: 0x8c434190  lw          $v1, 0x4190($v0)
    ctx->pc = 0x11faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16784)));
    // 0x11fafc: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11FAFCu;
    {
        const bool branch_taken_0x11fafc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x11FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAFCu;
        // 0x11fb00: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fafc) {
            ctx->pc = 0x11FB44u;
            goto label_11fb44;
        }
    }
    ctx->pc = 0x11FB04u;
    // 0x11fb04: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x11fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x11fb08: 0x8c464198  lw          $a2, 0x4198($v0)
    ctx->pc = 0x11fb08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16792)));
    // 0x11fb0c: 0x24843828  addiu       $a0, $a0, 0x3828
    ctx->pc = 0x11fb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14376));
    // 0x11fb10: 0xc044332  jal         func_110CC8
    ctx->pc = 0x11FB10u;
    SET_GPR_U32(ctx, 31, 0x11FB18u);
    ctx->pc = 0x11FB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB10u;
    // 0x11fb14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x11FB10u, 0x11FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB18u;
label_11fb18:
    // 0x11fb18: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x11FB18u;
    {
        const bool branch_taken_0x11fb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB18u;
        // 0x11fb1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb18) {
            ctx->pc = 0x11FC00u;
            goto label_11fc00;
        }
    }
    ctx->pc = 0x11FB20u;
label_11fb20:
    // 0x11fb20: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x11fb24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11fb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fb28: 0xc047e94  jal         func_11FA50
    ctx->pc = 0x11FB28u;
    SET_GPR_U32(ctx, 31, 0x11FB30u);
    ctx->pc = 0x11FB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB28u;
    // 0x11fb2c: 0xac514198  sw          $s1, 0x4198($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16792), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FA50u, 0x11FB28u, 0x11FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB30u;
label_11fb30:
    // 0x11fb30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FB30u;
    {
        const bool branch_taken_0x11fb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB30u;
        // 0x11fb34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb30) {
            ctx->pc = 0x11FB4Cu;
            goto label_11fb4c;
        }
    }
    ctx->pc = 0x11FB38u;
    // 0x11fb38: 0x8e0441ac  lw          $a0, 0x41AC($s0)
    ctx->pc = 0x11fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16812)));
    // 0x11fb3c: 0xc043800  jal         func_10E000
    ctx->pc = 0x11FB3Cu;
    SET_GPR_U32(ctx, 31, 0x11FB44u);
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x11FB3Cu, 0x11FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB44u;
label_11fb44:
    // 0x11fb44: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11FB44u;
    {
        const bool branch_taken_0x11fb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB44u;
        // 0x11fb48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb44) {
            ctx->pc = 0x11FC00u;
            goto label_11fc00;
        }
    }
    ctx->pc = 0x11FB4Cu;
label_11fb4c:
    // 0x11fb4c: 0xc044568  jal         func_1115A0
    ctx->pc = 0x11FB4Cu;
    SET_GPR_U32(ctx, 31, 0x11FB54u);
    ctx->pc = 0x11FB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB4Cu;
    // 0x11fb50: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115A0u, 0x11FB4Cu, 0x11FB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB54u;
label_11fb54:
    // 0x11fb54: 0x8e4241d4  lw          $v0, 0x41D4($s2)
    ctx->pc = 0x11fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16852)));
    // 0x11fb58: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11FB58u;
    {
        const bool branch_taken_0x11fb58 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x11FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB58u;
        // 0x11fb5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb58) {
            ctx->pc = 0x11FC00u;
            goto label_11fc00;
        }
    }
    ctx->pc = 0x11FB60u;
    // 0x11fb60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11FB60u;
    {
        const bool branch_taken_0x11fb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB60u;
        // 0x11fb64: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb60) {
            ctx->pc = 0x11FB8Cu;
            goto label_11fb8c;
        }
    }
    ctx->pc = 0x11FB68u;
label_11fb68:
    // 0x11fb68: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x11fb6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11fb70:
    // 0x11fb70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11fb74: 0x0  nop
    ctx->pc = 0x11fb74u;
    // NOP
    // 0x11fb78: 0x0  nop
    ctx->pc = 0x11fb78u;
    // NOP
    // 0x11fb7c: 0x0  nop
    ctx->pc = 0x11fb7cu;
    // NOP
    // 0x11fb80: 0x0  nop
    ctx->pc = 0x11fb80u;
    // NOP
    // 0x11fb84: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11FB84u;
    {
        const bool branch_taken_0x11fb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11fb84) {
            ctx->pc = 0x11FB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fb70;
        }
    }
    ctx->pc = 0x11FB8Cu;
label_11fb8c:
    // 0x11fb8c: 0x26305d00  addiu       $s0, $s1, 0x5D00
    ctx->pc = 0x11fb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 23808));
label_11fb90:
    // 0x11fb90: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11fb90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11fb94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11fb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb98: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x11fb98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x11fb9c: 0xc044752  jal         func_111D48
    ctx->pc = 0x11FB9Cu;
    SET_GPR_U32(ctx, 31, 0x11FBA4u);
    ctx->pc = 0x11FBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB9Cu;
    // 0x11fba0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D48u, 0x11FB9Cu, 0x11FBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FBA4u;
label_11fba4:
    // 0x11fba4: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11FBA4u;
    {
        const bool branch_taken_0x11fba4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x11fba4) {
            ctx->pc = 0x11FBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FBA4u;
            // 0x11fba8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FBF4u;
            goto label_11fbf4;
        }
    }
    ctx->pc = 0x11FBACu;
    // 0x11fbac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x11fbb0: 0x8c434190  lw          $v1, 0x4190($v0)
    ctx->pc = 0x11fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x404190u));
    // 0x11fbb4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FBB4u;
    {
        const bool branch_taken_0x11fbb4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x11FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBB4u;
        // 0x11fbb8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbb4) {
            ctx->pc = 0x11FBCCu;
            goto label_11fbcc;
        }
    }
    ctx->pc = 0x11FBBCu;
    // 0x11fbbc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x11fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x11fbc0: 0xc044332  jal         func_110CC8
    ctx->pc = 0x11FBC0u;
    SET_GPR_U32(ctx, 31, 0x11FBC8u);
    ctx->pc = 0x11FBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FBC0u;
    // 0x11fbc4: 0x24843850  addiu       $a0, $a0, 0x3850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x11FBC0u, 0x11FBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FBC8u;
label_11fbc8:
    // 0x11fbc8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11fbcc:
    // 0x11fbcc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11fbd0:
    // 0x11fbd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11fbd4: 0x0  nop
    ctx->pc = 0x11fbd4u;
    // NOP
    // 0x11fbd8: 0x0  nop
    ctx->pc = 0x11fbd8u;
    // NOP
    // 0x11fbdc: 0x0  nop
    ctx->pc = 0x11fbdcu;
    // NOP
    // 0x11fbe0: 0x0  nop
    ctx->pc = 0x11fbe0u;
    // NOP
    // 0x11fbe4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11FBE4u;
    {
        const bool branch_taken_0x11fbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11fbe4) {
            ctx->pc = 0x11FBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fbd0;
        }
    }
    ctx->pc = 0x11FBECu;
    // 0x11fbec: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11FBECu;
    {
        const bool branch_taken_0x11fbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBECu;
        // 0x11fbf0: 0x26305d00  addiu       $s0, $s1, 0x5D00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 23808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbec) {
            ctx->pc = 0x11FB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fb90;
        }
    }
    ctx->pc = 0x11FBF4u;
label_11fbf4:
    // 0x11fbf4: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11FBF4u;
    {
        const bool branch_taken_0x11fbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBF4u;
        // 0x11fbf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbf4) {
            ctx->pc = 0x11FB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fb68;
        }
    }
    ctx->pc = 0x11FBFCu;
    // 0x11fbfc: 0xae4041d4  sw          $zero, 0x41D4($s2)
    ctx->pc = 0x11fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16852), GPR_U32(ctx, 0));
label_11fc00:
    // 0x11fc00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11fc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fc04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11fc04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11fc08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11fc08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fc0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11fc0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fc10: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC10u;
        // 0x11fc14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC18u;
}
