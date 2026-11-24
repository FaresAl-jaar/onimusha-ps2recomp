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

// Function: sub_00302FF0
// Address: 0x302ff0 - 0x303120
void sub_00302FF0_0x302ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302FF0_0x302ff0");
#endif

    switch (ctx->pc) {
        case 0x302ff0u: goto label_302ff0;
        case 0x302ff4u: goto label_302ff4;
        case 0x302ff8u: goto label_302ff8;
        case 0x302ffcu: goto label_302ffc;
        case 0x303000u: goto label_303000;
        case 0x303004u: goto label_303004;
        case 0x303008u: goto label_303008;
        case 0x30300cu: goto label_30300c;
        case 0x303010u: goto label_303010;
        case 0x303014u: goto label_303014;
        case 0x303018u: goto label_303018;
        case 0x30301cu: goto label_30301c;
        case 0x303020u: goto label_303020;
        case 0x303024u: goto label_303024;
        case 0x303028u: goto label_303028;
        case 0x30302cu: goto label_30302c;
        case 0x303030u: goto label_303030;
        case 0x303034u: goto label_303034;
        case 0x303038u: goto label_303038;
        case 0x30303cu: goto label_30303c;
        case 0x303040u: goto label_303040;
        case 0x303044u: goto label_303044;
        case 0x303048u: goto label_303048;
        case 0x30304cu: goto label_30304c;
        case 0x303050u: goto label_303050;
        case 0x303054u: goto label_303054;
        case 0x303058u: goto label_303058;
        case 0x30305cu: goto label_30305c;
        case 0x303060u: goto label_303060;
        case 0x303064u: goto label_303064;
        case 0x303068u: goto label_303068;
        case 0x30306cu: goto label_30306c;
        case 0x303070u: goto label_303070;
        case 0x303074u: goto label_303074;
        case 0x303078u: goto label_303078;
        case 0x30307cu: goto label_30307c;
        case 0x303080u: goto label_303080;
        case 0x303084u: goto label_303084;
        case 0x303088u: goto label_303088;
        case 0x30308cu: goto label_30308c;
        case 0x303090u: goto label_303090;
        case 0x303094u: goto label_303094;
        case 0x303098u: goto label_303098;
        case 0x30309cu: goto label_30309c;
        case 0x3030a0u: goto label_3030a0;
        case 0x3030a4u: goto label_3030a4;
        case 0x3030a8u: goto label_3030a8;
        case 0x3030acu: goto label_3030ac;
        case 0x3030b0u: goto label_3030b0;
        case 0x3030b4u: goto label_3030b4;
        case 0x3030b8u: goto label_3030b8;
        case 0x3030bcu: goto label_3030bc;
        case 0x3030c0u: goto label_3030c0;
        case 0x3030c4u: goto label_3030c4;
        case 0x3030c8u: goto label_3030c8;
        case 0x3030ccu: goto label_3030cc;
        case 0x3030d0u: goto label_3030d0;
        case 0x3030d4u: goto label_3030d4;
        case 0x3030d8u: goto label_3030d8;
        case 0x3030dcu: goto label_3030dc;
        case 0x3030e0u: goto label_3030e0;
        case 0x3030e4u: goto label_3030e4;
        case 0x3030e8u: goto label_3030e8;
        case 0x3030ecu: goto label_3030ec;
        case 0x3030f0u: goto label_3030f0;
        case 0x3030f4u: goto label_3030f4;
        case 0x3030f8u: goto label_3030f8;
        case 0x3030fcu: goto label_3030fc;
        case 0x303100u: goto label_303100;
        case 0x303104u: goto label_303104;
        case 0x303108u: goto label_303108;
        case 0x30310cu: goto label_30310c;
        case 0x303110u: goto label_303110;
        case 0x303114u: goto label_303114;
        case 0x303118u: goto label_303118;
        case 0x30311cu: goto label_30311c;
        default: break;
    }

    ctx->pc = 0x302ff0u;

label_302ff0:
    // 0x302ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x302ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_302ff4:
    // 0x302ff4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x302ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_302ff8:
    // 0x302ff8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x302ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_302ffc:
    // 0x302ffc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x302ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_303000:
    // 0x303000: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_303004:
    // 0x303004: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x303004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_303008:
    // 0x303008: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x303008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_30300c:
    // 0x30300c: 0x320f809  jalr        $t9
label_303010:
    if (ctx->pc == 0x303010u) {
        ctx->pc = 0x303010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30300Cu;
        // 0x303010: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303014u;
        goto label_303014;
    }
    ctx->pc = 0x30300Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x303014u);
        ctx->pc = 0x303010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30300Cu;
        // 0x303010: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30300Cu, 0x303014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x303014u;
label_303014:
    // 0x303014: 0xc0c0858  jal         func_302160
label_303018:
    if (ctx->pc == 0x303018u) {
        ctx->pc = 0x303018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303014u;
        // 0x303018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30301Cu;
        goto label_30301c;
    }
    ctx->pc = 0x303014u;
    SET_GPR_U32(ctx, 31, 0x30301Cu);
    ctx->pc = 0x303018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303014u;
    // 0x303018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302160u, 0x303014u, 0x30301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30301Cu;
label_30301c:
    // 0x30301c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_303020:
    if (ctx->pc == 0x303020u) {
        ctx->pc = 0x303020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30301Cu;
        // 0x303020: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303024u;
        goto label_303024;
    }
    ctx->pc = 0x30301Cu;
    {
        const bool branch_taken_0x30301c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30301Cu;
        // 0x303020: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30301c) {
            ctx->pc = 0x303068u;
            goto label_303068;
        }
    }
    ctx->pc = 0x303024u;
label_303024:
    // 0x303024: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x303024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303028:
    // 0x303028: 0xc096c4c  jal         func_25B130
label_30302c:
    if (ctx->pc == 0x30302Cu) {
        ctx->pc = 0x30302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303028u;
        // 0x30302c: 0x8e2405b0  lw          $a0, 0x5B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303030u;
        goto label_303030;
    }
    ctx->pc = 0x303028u;
    SET_GPR_U32(ctx, 31, 0x303030u);
    ctx->pc = 0x30302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303028u;
    // 0x30302c: 0x8e2405b0  lw          $a0, 0x5B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x303028u, 0x303030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303030u;
label_303030:
    // 0x303030: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x303030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_303034:
    // 0x303034: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x303034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_303038:
    // 0x303038: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x303038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_30303c:
    // 0x30303c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_303040:
    if (ctx->pc == 0x303040u) {
        ctx->pc = 0x303044u;
        goto label_303044;
    }
    ctx->pc = 0x30303Cu;
    {
        const bool branch_taken_0x30303c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30303c) {
            ctx->pc = 0x303028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303028;
        }
    }
    ctx->pc = 0x303044u;
label_303044:
    // 0x303044: 0x8e0505c0  lw          $a1, 0x5C0($s0)
    ctx->pc = 0x303044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1472)));
label_303048:
    // 0x303048: 0xc0c0844  jal         func_302110
label_30304c:
    if (ctx->pc == 0x30304Cu) {
        ctx->pc = 0x30304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303048u;
        // 0x30304c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303050u;
        goto label_303050;
    }
    ctx->pc = 0x303048u;
    SET_GPR_U32(ctx, 31, 0x303050u);
    ctx->pc = 0x30304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303048u;
    // 0x30304c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x303048u, 0x303050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303050u;
label_303050:
    // 0x303050: 0x8e0505c4  lw          $a1, 0x5C4($s0)
    ctx->pc = 0x303050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1476)));
label_303054:
    // 0x303054: 0xc0c0844  jal         func_302110
label_303058:
    if (ctx->pc == 0x303058u) {
        ctx->pc = 0x303058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303054u;
        // 0x303058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30305Cu;
        goto label_30305c;
    }
    ctx->pc = 0x303054u;
    SET_GPR_U32(ctx, 31, 0x30305Cu);
    ctx->pc = 0x303058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303054u;
    // 0x303058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x303054u, 0x30305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30305Cu;
label_30305c:
    // 0x30305c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_303060:
    if (ctx->pc == 0x303060u) {
        ctx->pc = 0x303064u;
        goto label_303064;
    }
    ctx->pc = 0x30305Cu;
    {
        const bool branch_taken_0x30305c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30305c) {
            ctx->pc = 0x303108u;
            goto label_303108;
        }
    }
    ctx->pc = 0x303064u;
label_303064:
    // 0x303064: 0x0  nop
    ctx->pc = 0x303064u;
    // NOP
label_303068:
    // 0x303068: 0x8c4206ac  lw          $v0, 0x6AC($v0)
    ctx->pc = 0x303068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
label_30306c:
    // 0x30306c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x30306cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_303070:
    // 0x303070: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_303074:
    if (ctx->pc == 0x303074u) {
        ctx->pc = 0x303074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303070u;
        // 0x303074: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303078u;
        goto label_303078;
    }
    ctx->pc = 0x303070u;
    {
        const bool branch_taken_0x303070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303070u;
        // 0x303074: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303070) {
            ctx->pc = 0x3030C0u;
            goto label_3030c0;
        }
    }
    ctx->pc = 0x303078u;
label_303078:
    // 0x303078: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x303078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30307c:
    // 0x30307c: 0x0  nop
    ctx->pc = 0x30307cu;
    // NOP
label_303080:
    // 0x303080: 0xc096c4c  jal         func_25B130
label_303084:
    if (ctx->pc == 0x303084u) {
        ctx->pc = 0x303084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303080u;
        // 0x303084: 0x8e4405b0  lw          $a0, 0x5B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303088u;
        goto label_303088;
    }
    ctx->pc = 0x303080u;
    SET_GPR_U32(ctx, 31, 0x303088u);
    ctx->pc = 0x303084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303080u;
    // 0x303084: 0x8e4405b0  lw          $a0, 0x5B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x303080u, 0x303088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303088u;
label_303088:
    // 0x303088: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x303088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_30308c:
    // 0x30308c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x30308cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_303090:
    // 0x303090: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x303090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_303094:
    // 0x303094: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_303098:
    if (ctx->pc == 0x303098u) {
        ctx->pc = 0x30309Cu;
        goto label_30309c;
    }
    ctx->pc = 0x303094u;
    {
        const bool branch_taken_0x303094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303094) {
            ctx->pc = 0x303080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303080;
        }
    }
    ctx->pc = 0x30309Cu;
label_30309c:
    // 0x30309c: 0x8e0505c0  lw          $a1, 0x5C0($s0)
    ctx->pc = 0x30309cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1472)));
label_3030a0:
    // 0x3030a0: 0xc0c0844  jal         func_302110
label_3030a4:
    if (ctx->pc == 0x3030A4u) {
        ctx->pc = 0x3030A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030A0u;
        // 0x3030a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3030A8u;
        goto label_3030a8;
    }
    ctx->pc = 0x3030A0u;
    SET_GPR_U32(ctx, 31, 0x3030A8u);
    ctx->pc = 0x3030A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030A0u;
    // 0x3030a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3030A0u, 0x3030A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030A8u;
label_3030a8:
    // 0x3030a8: 0x8e0505c4  lw          $a1, 0x5C4($s0)
    ctx->pc = 0x3030a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1476)));
label_3030ac:
    // 0x3030ac: 0xc0c0844  jal         func_302110
label_3030b0:
    if (ctx->pc == 0x3030B0u) {
        ctx->pc = 0x3030B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030ACu;
        // 0x3030b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3030B4u;
        goto label_3030b4;
    }
    ctx->pc = 0x3030ACu;
    SET_GPR_U32(ctx, 31, 0x3030B4u);
    ctx->pc = 0x3030B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030ACu;
    // 0x3030b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3030ACu, 0x3030B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030B4u;
label_3030b4:
    // 0x3030b4: 0x10000014  b           . + 4 + (0x14 << 2)
label_3030b8:
    if (ctx->pc == 0x3030B8u) {
        ctx->pc = 0x3030BCu;
        goto label_3030bc;
    }
    ctx->pc = 0x3030B4u;
    {
        const bool branch_taken_0x3030b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3030b4) {
            ctx->pc = 0x303108u;
            goto label_303108;
        }
    }
    ctx->pc = 0x3030BCu;
label_3030bc:
    // 0x3030bc: 0x0  nop
    ctx->pc = 0x3030bcu;
    // NOP
label_3030c0:
    // 0x3030c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3030c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3030c4:
    // 0x3030c4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3030c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3030c8:
    // 0x3030c8: 0x8e4505b0  lw          $a1, 0x5B0($s2)
    ctx->pc = 0x3030c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1456)));
label_3030cc:
    // 0x3030cc: 0xc0c0844  jal         func_302110
label_3030d0:
    if (ctx->pc == 0x3030D0u) {
        ctx->pc = 0x3030D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030CCu;
        // 0x3030d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3030D4u;
        goto label_3030d4;
    }
    ctx->pc = 0x3030CCu;
    SET_GPR_U32(ctx, 31, 0x3030D4u);
    ctx->pc = 0x3030D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030CCu;
    // 0x3030d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3030CCu, 0x3030D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030D4u;
label_3030d4:
    // 0x3030d4: 0x8e4405b0  lw          $a0, 0x5B0($s2)
    ctx->pc = 0x3030d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1456)));
label_3030d8:
    // 0x3030d8: 0xc096c7c  jal         func_25B1F0
label_3030dc:
    if (ctx->pc == 0x3030DCu) {
        ctx->pc = 0x3030DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030D8u;
        // 0x3030dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3030E0u;
        goto label_3030e0;
    }
    ctx->pc = 0x3030D8u;
    SET_GPR_U32(ctx, 31, 0x3030E0u);
    ctx->pc = 0x3030DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030D8u;
    // 0x3030dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B1F0u, 0x3030D8u, 0x3030E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030E0u;
label_3030e0:
    // 0x3030e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3030e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3030e4:
    // 0x3030e4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x3030e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_3030e8:
    // 0x3030e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3030ec:
    if (ctx->pc == 0x3030ECu) {
        ctx->pc = 0x3030ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030E8u;
        // 0x3030ec: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3030F0u;
        goto label_3030f0;
    }
    ctx->pc = 0x3030E8u;
    {
        const bool branch_taken_0x3030e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3030ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030E8u;
        // 0x3030ec: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3030e8) {
            ctx->pc = 0x3030C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3030c8;
        }
    }
    ctx->pc = 0x3030F0u;
label_3030f0:
    // 0x3030f0: 0x8e0505c0  lw          $a1, 0x5C0($s0)
    ctx->pc = 0x3030f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1472)));
label_3030f4:
    // 0x3030f4: 0xc0c0844  jal         func_302110
label_3030f8:
    if (ctx->pc == 0x3030F8u) {
        ctx->pc = 0x3030F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030F4u;
        // 0x3030f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3030FCu;
        goto label_3030fc;
    }
    ctx->pc = 0x3030F4u;
    SET_GPR_U32(ctx, 31, 0x3030FCu);
    ctx->pc = 0x3030F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030F4u;
    // 0x3030f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3030F4u, 0x3030FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030FCu;
label_3030fc:
    // 0x3030fc: 0x8e0505c4  lw          $a1, 0x5C4($s0)
    ctx->pc = 0x3030fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1476)));
label_303100:
    // 0x303100: 0xc0c0844  jal         func_302110
label_303104:
    if (ctx->pc == 0x303104u) {
        ctx->pc = 0x303104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303100u;
        // 0x303104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303108u;
        goto label_303108;
    }
    ctx->pc = 0x303100u;
    SET_GPR_U32(ctx, 31, 0x303108u);
    ctx->pc = 0x303104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303100u;
    // 0x303104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x303100u, 0x303108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303108u;
label_303108:
    // 0x303108: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x303108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30310c:
    // 0x30310c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30310cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_303110:
    // 0x303110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_303114:
    // 0x303114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_303118:
    // 0x303118: 0x3e00008  jr          $ra
label_30311c:
    if (ctx->pc == 0x30311Cu) {
        ctx->pc = 0x30311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303118u;
        // 0x30311c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303120u;
        goto label_fallthrough_0x303118;
    }
    ctx->pc = 0x303118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303118u;
        // 0x30311c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x303118:
    ctx->pc = 0x303120u;
}
