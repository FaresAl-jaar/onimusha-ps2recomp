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

// Function: sub_003AB9F0
// Address: 0x3ab9f0 - 0x3abb20
void sub_003AB9F0_0x3ab9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB9F0_0x3ab9f0");
#endif

    switch (ctx->pc) {
        case 0x3aba3cu: goto label_3aba3c;
        case 0x3aba5cu: goto label_3aba5c;
        case 0x3aba68u: goto label_3aba68;
        case 0x3aba74u: goto label_3aba74;
        case 0x3aba84u: goto label_3aba84;
        case 0x3aba90u: goto label_3aba90;
        case 0x3aba9cu: goto label_3aba9c;
        case 0x3abaacu: goto label_3abaac;
        case 0x3abab8u: goto label_3abab8;
        case 0x3abac4u: goto label_3abac4;
        case 0x3abad0u: goto label_3abad0;
        case 0x3abae0u: goto label_3abae0;
        case 0x3abaf0u: goto label_3abaf0;
        case 0x3abb00u: goto label_3abb00;
        default: break;
    }

    ctx->pc = 0x3ab9f0u;

    // 0x3ab9f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ab9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ab9f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ab9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3ab9f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ab9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ab9fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ab9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3aba00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aba00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aba04: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3aba04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aba08: 0x8f868ba8  lw          $a2, -0x7458($gp)
    ctx->pc = 0x3aba08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3aba0c: 0x10c0003e  beqz        $a2, . + 4 + (0x3E << 2)
    ctx->pc = 0x3ABA0Cu;
    {
        const bool branch_taken_0x3aba0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA0Cu;
        // 0x3aba10: 0x30e400ff  andi        $a0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba0c) {
            ctx->pc = 0x3ABB08u;
            goto label_3abb08;
        }
    }
    ctx->pc = 0x3ABA14u;
    // 0x3aba14: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3aba14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3aba18: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3aba18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3aba1c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3aba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3aba20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3aba20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3aba24: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3aba24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3aba28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3aba28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3aba2c: 0xc39021  addu        $s2, $a2, $v1
    ctx->pc = 0x3aba2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3aba30: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3aba30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aba34: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x3ABA34u;
    SET_GPR_U32(ctx, 31, 0x3ABA3Cu);
    ctx->pc = 0x3ABA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA34u;
    // 0x3aba38: 0x96440058  lhu         $a0, 0x58($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x3ABA34u, 0x3ABA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA3Cu;
label_3aba3c:
    // 0x3aba3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ABA3Cu;
    {
        const bool branch_taken_0x3aba3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aba3c) {
            ctx->pc = 0x3ABA50u;
            goto label_3aba50;
        }
    }
    ctx->pc = 0x3ABA44u;
    // 0x3aba44: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x3aba44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3aba48: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3aba48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aba4c: 0x0  nop
    ctx->pc = 0x3aba4cu;
    // NOP
label_3aba50:
    // 0x3aba50: 0x96510000  lhu         $s1, 0x0($s2)
    ctx->pc = 0x3aba50u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3aba54: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x3ABA54u;
    SET_GPR_U32(ctx, 31, 0x3ABA5Cu);
    ctx->pc = 0x3ABA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA54u;
    // 0x3aba58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x3ABA54u, 0x3ABA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA5Cu;
label_3aba5c:
    // 0x3aba5c: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x3aba5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3aba60: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3ABA60u;
    SET_GPR_U32(ctx, 31, 0x3ABA68u);
    ctx->pc = 0x3ABA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA60u;
    // 0x3aba64: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3ABA60u, 0x3ABA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA68u;
label_3aba68:
    // 0x3aba68: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x3aba68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aba6c: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x3ABA6Cu;
    SET_GPR_U32(ctx, 31, 0x3ABA74u);
    ctx->pc = 0x3ABA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA6Cu;
    // 0x3aba70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x3ABA6Cu, 0x3ABA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA74u;
label_3aba74:
    // 0x3aba74: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x3aba74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aba78: 0x96510006  lhu         $s1, 0x6($s2)
    ctx->pc = 0x3aba78u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x3aba7c: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x3ABA7Cu;
    SET_GPR_U32(ctx, 31, 0x3ABA84u);
    ctx->pc = 0x3ABA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA7Cu;
    // 0x3aba80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x3ABA7Cu, 0x3ABA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA84u;
label_3aba84:
    // 0x3aba84: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x3aba84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3aba88: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3ABA88u;
    SET_GPR_U32(ctx, 31, 0x3ABA90u);
    ctx->pc = 0x3ABA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA88u;
    // 0x3aba8c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3ABA88u, 0x3ABA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA90u;
label_3aba90:
    // 0x3aba90: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x3aba90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aba94: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x3ABA94u;
    SET_GPR_U32(ctx, 31, 0x3ABA9Cu);
    ctx->pc = 0x3ABA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA94u;
    // 0x3aba98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x3ABA94u, 0x3ABA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA9Cu;
label_3aba9c:
    // 0x3aba9c: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x3aba9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x3abaa0: 0x9651000a  lhu         $s1, 0xA($s2)
    ctx->pc = 0x3abaa0u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x3abaa4: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x3ABAA4u;
    SET_GPR_U32(ctx, 31, 0x3ABAACu);
    ctx->pc = 0x3ABAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABAA4u;
    // 0x3abaa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x3ABAA4u, 0x3ABAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABAACu;
label_3abaac:
    // 0x3abaac: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x3abaacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3abab0: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3ABAB0u;
    SET_GPR_U32(ctx, 31, 0x3ABAB8u);
    ctx->pc = 0x3ABAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABAB0u;
    // 0x3abab4: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3ABAB0u, 0x3ABAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABAB8u;
label_3abab8:
    // 0x3abab8: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x3abab8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ababc: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x3ABABCu;
    SET_GPR_U32(ctx, 31, 0x3ABAC4u);
    ctx->pc = 0x3ABAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABABCu;
    // 0x3abac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x3ABABCu, 0x3ABAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABAC4u;
label_3abac4:
    // 0x3abac4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3abac4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3abac8: 0xc0d2760  jal         func_349D80
    ctx->pc = 0x3ABAC8u;
    SET_GPR_U32(ctx, 31, 0x3ABAD0u);
    ctx->pc = 0x3ABACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABAC8u;
    // 0x3abacc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D80u, 0x3ABAC8u, 0x3ABAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABAD0u;
label_3abad0:
    // 0x3abad0: 0xa202000e  sb          $v0, 0xE($s0)
    ctx->pc = 0x3abad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x3abad4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3abad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abad8: 0xc0d2798  jal         func_349E60
    ctx->pc = 0x3ABAD8u;
    SET_GPR_U32(ctx, 31, 0x3ABAE0u);
    ctx->pc = 0x3ABADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABAD8u;
    // 0x3abadc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349E60u, 0x3ABAD8u, 0x3ABAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABAE0u;
label_3abae0:
    // 0x3abae0: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x3abae0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x3abae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3abae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abae8: 0xc0d2798  jal         func_349E60
    ctx->pc = 0x3ABAE8u;
    SET_GPR_U32(ctx, 31, 0x3ABAF0u);
    ctx->pc = 0x3ABAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABAE8u;
    // 0x3abaec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349E60u, 0x3ABAE8u, 0x3ABAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABAF0u;
label_3abaf0:
    // 0x3abaf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3abaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abaf4: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x3abaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x3abaf8: 0xc0d2798  jal         func_349E60
    ctx->pc = 0x3ABAF8u;
    SET_GPR_U32(ctx, 31, 0x3ABB00u);
    ctx->pc = 0x3ABAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABAF8u;
    // 0x3abafc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349E60u, 0x3ABAF8u, 0x3ABB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABB00u;
label_3abb00:
    // 0x3abb00: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x3abb00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x3abb04: 0x0  nop
    ctx->pc = 0x3abb04u;
    // NOP
label_3abb08:
    // 0x3abb08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3abb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3abb0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3abb0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3abb10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3abb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3abb14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3abb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3abb18: 0x3e00008  jr          $ra
    ctx->pc = 0x3ABB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB18u;
        // 0x3abb1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ABB20u;
}
