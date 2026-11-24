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

// Function: sub_0034DDF0
// Address: 0x34ddf0 - 0x34df38
void sub_0034DDF0_0x34ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DDF0_0x34ddf0");
#endif

    switch (ctx->pc) {
        case 0x34de40u: goto label_34de40;
        case 0x34de5cu: goto label_34de5c;
        case 0x34de78u: goto label_34de78;
        case 0x34de90u: goto label_34de90;
        case 0x34de9cu: goto label_34de9c;
        case 0x34dec8u: goto label_34dec8;
        case 0x34ded4u: goto label_34ded4;
        case 0x34df00u: goto label_34df00;
        case 0x34df0cu: goto label_34df0c;
        default: break;
    }

    ctx->pc = 0x34ddf0u;

    // 0x34ddf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34ddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34ddf4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x34ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x34ddf8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34ddf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34ddfc: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x34ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x34de00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34de00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34de04: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x34de04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34de08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34de0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34de0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34de10: 0xa0820024  sb          $v0, 0x24($a0)
    ctx->pc = 0x34de10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x34de14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34de14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34de18: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x34de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34de1c: 0xa0830025  sb          $v1, 0x25($a0)
    ctx->pc = 0x34de1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x34de20: 0xa0820026  sb          $v0, 0x26($a0)
    ctx->pc = 0x34de20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 2));
    // 0x34de24: 0x90830024  lbu         $v1, 0x24($a0)
    ctx->pc = 0x34de24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x34de28: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x34de28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34de2c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x34de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x34de30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34de30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34de34: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x34de34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x34de38: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x34DE38u;
    SET_GPR_U32(ctx, 31, 0x34DE40u);
    ctx->pc = 0x34DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DE38u;
    // 0x34de3c: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x34DE38u, 0x34DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE40u;
label_34de40:
    // 0x34de40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34de40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x34de44: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x34de44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x34de48: 0x92020025  lbu         $v0, 0x25($s0)
    ctx->pc = 0x34de48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x34de4c: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x34de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x34de50: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x34de50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34de54: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x34DE54u;
    SET_GPR_U32(ctx, 31, 0x34DE5Cu);
    ctx->pc = 0x34DE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DE54u;
    // 0x34de58: 0x22940  sll         $a1, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x34DE54u, 0x34DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE5Cu;
label_34de5c:
    // 0x34de5c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x34de5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x34de60: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x34de60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x34de64: 0x92020026  lbu         $v0, 0x26($s0)
    ctx->pc = 0x34de64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x34de68: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x34de68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x34de6c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x34de6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34de70: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x34DE70u;
    SET_GPR_U32(ctx, 31, 0x34DE78u);
    ctx->pc = 0x34DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DE70u;
    // 0x34de74: 0x22940  sll         $a1, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x34DE70u, 0x34DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE78u;
label_34de78:
    // 0x34de78: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x34de78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x34de7c: 0x92030024  lbu         $v1, 0x24($s0)
    ctx->pc = 0x34de7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x34de80: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x34de80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34de84: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x34DE84u;
    {
        const bool branch_taken_0x34de84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DE84u;
        // 0x34de88: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34de84) {
            ctx->pc = 0x34DEB0u;
            goto label_34deb0;
        }
    }
    ctx->pc = 0x34DE8Cu;
    // 0x34de8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34de8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34de90:
    // 0x34de90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34de94: 0xc0d4360  jal         func_350D80
    ctx->pc = 0x34DE94u;
    SET_GPR_U32(ctx, 31, 0x34DE9Cu);
    ctx->pc = 0x34DE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DE94u;
    // 0x34de98: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350D80u, 0x34DE94u, 0x34DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE9Cu;
label_34de9c:
    // 0x34de9c: 0x92030024  lbu         $v1, 0x24($s0)
    ctx->pc = 0x34de9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x34dea0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34dea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x34dea4: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x34dea4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34dea8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x34DEA8u;
    {
        const bool branch_taken_0x34dea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DEA8u;
        // 0x34deac: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dea8) {
            ctx->pc = 0x34DE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34de90;
        }
    }
    ctx->pc = 0x34DEB0u;
label_34deb0:
    // 0x34deb0: 0x92030025  lbu         $v1, 0x25($s0)
    ctx->pc = 0x34deb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x34deb4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x34deb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34deb8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x34DEB8u;
    {
        const bool branch_taken_0x34deb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DEB8u;
        // 0x34debc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34deb8) {
            ctx->pc = 0x34DEE8u;
            goto label_34dee8;
        }
    }
    ctx->pc = 0x34DEC0u;
    // 0x34dec0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34dec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dec4: 0x0  nop
    ctx->pc = 0x34dec4u;
    // NOP
label_34dec8:
    // 0x34dec8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x34dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34decc: 0xc0d45a4  jal         func_351690
    ctx->pc = 0x34DECCu;
    SET_GPR_U32(ctx, 31, 0x34DED4u);
    ctx->pc = 0x34DED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DECCu;
    // 0x34ded0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351690u, 0x34DECCu, 0x34DED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DED4u;
label_34ded4:
    // 0x34ded4: 0x92030025  lbu         $v1, 0x25($s0)
    ctx->pc = 0x34ded4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x34ded8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34ded8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x34dedc: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x34dedcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34dee0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x34DEE0u;
    {
        const bool branch_taken_0x34dee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DEE0u;
        // 0x34dee4: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dee0) {
            ctx->pc = 0x34DEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34dec8;
        }
    }
    ctx->pc = 0x34DEE8u;
label_34dee8:
    // 0x34dee8: 0x92030026  lbu         $v1, 0x26($s0)
    ctx->pc = 0x34dee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x34deec: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x34deecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34def0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x34DEF0u;
    {
        const bool branch_taken_0x34def0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DEF0u;
        // 0x34def4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34def0) {
            ctx->pc = 0x34DF20u;
            goto label_34df20;
        }
    }
    ctx->pc = 0x34DEF8u;
    // 0x34def8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34def8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34defc: 0x0  nop
    ctx->pc = 0x34defcu;
    // NOP
label_34df00:
    // 0x34df00: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x34df00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x34df04: 0xc0d46b0  jal         func_351AC0
    ctx->pc = 0x34DF04u;
    SET_GPR_U32(ctx, 31, 0x34DF0Cu);
    ctx->pc = 0x34DF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DF04u;
    // 0x34df08: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351AC0u, 0x34DF04u, 0x34DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DF0Cu;
label_34df0c:
    // 0x34df0c: 0x92030026  lbu         $v1, 0x26($s0)
    ctx->pc = 0x34df0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x34df10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34df10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x34df14: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x34df14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34df18: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x34DF18u;
    {
        const bool branch_taken_0x34df18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DF18u;
        // 0x34df1c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34df18) {
            ctx->pc = 0x34DF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34df00;
        }
    }
    ctx->pc = 0x34DF20u;
label_34df20:
    // 0x34df20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34df20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34df24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34df24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34df28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34df28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34df2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34df2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34df30: 0x3e00008  jr          $ra
    ctx->pc = 0x34DF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DF30u;
        // 0x34df34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DF38u;
}
