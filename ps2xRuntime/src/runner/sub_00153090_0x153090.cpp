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

// Function: sub_00153090
// Address: 0x153090 - 0x15321c
void sub_00153090_0x153090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153090_0x153090");
#endif

    switch (ctx->pc) {
        case 0x153158u: goto label_153158;
        case 0x153198u: goto label_153198;
        case 0x1531c8u: goto label_1531c8;
        case 0x1531e0u: goto label_1531e0;
        case 0x1531f0u: goto label_1531f0;
        case 0x153208u: goto label_153208;
        default: break;
    }

    ctx->pc = 0x153090u;

    // 0x153090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153094: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x153094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x153098: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x153098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15309c: 0x3c0301b2  lui         $v1, 0x1B2
    ctx->pc = 0x15309cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)434 << 16));
    // 0x1530a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1530a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1530a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1530a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1530a8: 0x8c22fc98  lw          $v0, -0x368($at)
    ctx->pc = 0x1530a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC98u));
    // 0x1530ac: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x1530acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1530b0: 0x3c010051  lui         $at, 0x51
    ctx->pc = 0x1530b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)81 << 16));
    // 0x1530b4: 0x24a5efc0  addiu       $a1, $a1, -0x1040
    ctx->pc = 0x1530b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963136));
    // 0x1530b8: 0x3421a001  ori         $at, $at, 0xA001
    ctx->pc = 0x1530b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40961);
    // 0x1530bc: 0xa1082b  sltu        $at, $a1, $at
    ctx->pc = 0x1530bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1530c0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1530C0u;
    {
        const bool branch_taken_0x1530c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1530C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530C0u;
        // 0x1530c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1530c0) {
            ctx->pc = 0x1530D0u;
            goto label_1530d0;
        }
    }
    ctx->pc = 0x1530C8u;
    // 0x1530c8: 0x3445a000  ori         $a1, $v0, 0xA000
    ctx->pc = 0x1530c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x1530cc: 0x0  nop
    ctx->pc = 0x1530ccu;
    // NOP
label_1530d0:
    // 0x1530d0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1530d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1530d4: 0x3c0201b1  lui         $v0, 0x1B1
    ctx->pc = 0x1530d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)433 << 16));
    // 0x1530d8: 0xac25ac78  sw          $a1, -0x5388($at)
    ctx->pc = 0x1530d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x40AC78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40AC78u, _value); } while (0);
    // 0x1530dc: 0x3444f800  ori         $a0, $v0, 0xF800
    ctx->pc = 0x1530dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x1530e0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1530e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1530e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1530e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1530e8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1530e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1530ec: 0xac22ac7c  sw          $v0, -0x5384($at)
    ctx->pc = 0x1530ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945916), GPR_U32(ctx, 2));
    // 0x1530f0: 0x2403f800  addiu       $v1, $zero, -0x800
    ctx->pc = 0x1530f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x1530f4: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1530f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1530f8: 0xac24ac74  sw          $a0, -0x538C($at)
    ctx->pc = 0x1530f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x40AC74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40AC74u, _value); } while (0);
    // 0x1530fc: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1530fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x153100: 0x8c24ac74  lw          $a0, -0x538C($at)
    ctx->pc = 0x153100u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40AC74u));
    // 0x153104: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x153104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x153108: 0x248407ff  addiu       $a0, $a0, 0x7FF
    ctx->pc = 0x153108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
    // 0x15310c: 0x8c22ac78  lw          $v0, -0x5388($at)
    ctx->pc = 0x15310cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40AC78u));
    // 0x153110: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x153110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x153114: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x153114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x153118: 0xac23ac74  sw          $v1, -0x538C($at)
    ctx->pc = 0x153118u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x40AC74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40AC74u, _value); } while (0);
    // 0x15311c: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x15311cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x153120: 0x8c31ac74  lw          $s1, -0x538C($at)
    ctx->pc = 0x153120u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x40AC74u));
    // 0x153124: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x153124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x153128: 0x2450ffc0  addiu       $s0, $v0, -0x40
    ctx->pc = 0x153128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x15312c: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x15312cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x153130: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x153130u;
    {
        const bool branch_taken_0x153130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153130u;
        // 0x153134: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153130) {
            ctx->pc = 0x1531B8u;
            goto label_1531b8;
        }
    }
    ctx->pc = 0x153138u;
    // 0x153138: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x153138u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x15313c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x15313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x153140: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x153140u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x153144: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x153144u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x153148: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x153148u;
    {
        const bool branch_taken_0x153148 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153148u;
        // 0x15314c: 0x2604ff80  addiu       $a0, $s0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153148) {
            ctx->pc = 0x153188u;
            goto label_153188;
        }
    }
    ctx->pc = 0x153150u;
    // 0x153150: 0x24030065  addiu       $v1, $zero, 0x65
    ctx->pc = 0x153150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x153154: 0x0  nop
    ctx->pc = 0x153154u;
    // NOP
label_153158:
    // 0x153158: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x153158u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x15315c: 0xa0a30010  sb          $v1, 0x10($a1)
    ctx->pc = 0x15315cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x153160: 0xa0a30020  sb          $v1, 0x20($a1)
    ctx->pc = 0x153160u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x153164: 0xa0a30030  sb          $v1, 0x30($a1)
    ctx->pc = 0x153164u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x153168: 0xa0a30040  sb          $v1, 0x40($a1)
    ctx->pc = 0x153168u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x15316c: 0xa0a30050  sb          $v1, 0x50($a1)
    ctx->pc = 0x15316cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x153170: 0xa0a30060  sb          $v1, 0x60($a1)
    ctx->pc = 0x153170u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x153174: 0xa0a30070  sb          $v1, 0x70($a1)
    ctx->pc = 0x153174u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x153178: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x153178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x15317c: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x15317cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x153180: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x153180u;
    {
        const bool branch_taken_0x153180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153180) {
            ctx->pc = 0x153158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153158;
        }
    }
    ctx->pc = 0x153188u;
label_153188:
    // 0x153188: 0xb0082b  sltu        $at, $a1, $s0
    ctx->pc = 0x153188u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x15318c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15318Cu;
    {
        const bool branch_taken_0x15318c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15318Cu;
        // 0x153190: 0x24030065  addiu       $v1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15318c) {
            ctx->pc = 0x1531B8u;
            goto label_1531b8;
        }
    }
    ctx->pc = 0x153194u;
    // 0x153194: 0x0  nop
    ctx->pc = 0x153194u;
    // NOP
label_153198:
    // 0x153198: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x153198u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x15319c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x15319cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1531a0: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x1531a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1531a4: 0x0  nop
    ctx->pc = 0x1531a4u;
    // NOP
    // 0x1531a8: 0x0  nop
    ctx->pc = 0x1531a8u;
    // NOP
    // 0x1531ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1531ACu;
    {
        const bool branch_taken_0x1531ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1531ac) {
            ctx->pc = 0x153198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153198;
        }
    }
    ctx->pc = 0x1531B4u;
    // 0x1531b4: 0x0  nop
    ctx->pc = 0x1531b4u;
    // NOP
label_1531b8:
    // 0x1531b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1531b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1531bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531c0: 0xc049590  jal         func_125640
    ctx->pc = 0x1531C0u;
    SET_GPR_U32(ctx, 31, 0x1531C8u);
    ctx->pc = 0x1531C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1531C0u;
    // 0x1531c4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1531C0u, 0x1531C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1531C8u;
label_1531c8:
    // 0x1531c8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1531c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1531cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1531ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1531d0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x1531d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x1531d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1531d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531d8: 0xc054c10  jal         func_153040
    ctx->pc = 0x1531D8u;
    SET_GPR_U32(ctx, 31, 0x1531E0u);
    ctx->pc = 0x1531DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1531D8u;
    // 0x1531dc: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153040u, 0x1531D8u, 0x1531E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1531E0u;
label_1531e0:
    // 0x1531e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1531e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1531e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531e8: 0xc049590  jal         func_125640
    ctx->pc = 0x1531E8u;
    SET_GPR_U32(ctx, 31, 0x1531F0u);
    ctx->pc = 0x1531ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1531E8u;
    // 0x1531ec: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1531E8u, 0x1531F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1531F0u;
label_1531f0:
    // 0x1531f0: 0xae310008  sw          $s1, 0x8($s1)
    ctx->pc = 0x1531f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 17));
    // 0x1531f4: 0x2402fc19  addiu       $v0, $zero, -0x3E7
    ctx->pc = 0x1531f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
    // 0x1531f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1531f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1531fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1531fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153200: 0xc054c10  jal         func_153040
    ctx->pc = 0x153200u;
    SET_GPR_U32(ctx, 31, 0x153208u);
    ctx->pc = 0x153204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153200u;
    // 0x153204: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153040u, 0x153200u, 0x153208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153208u;
label_153208:
    // 0x153208: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x153208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15320c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15320cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153214: 0x3e00008  jr          $ra
    ctx->pc = 0x153214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153214u;
        // 0x153218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15321Cu;
}
