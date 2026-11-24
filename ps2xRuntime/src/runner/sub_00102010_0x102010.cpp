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

// Function: sub_00102010
// Address: 0x102010 - 0x1021d0
void sub_00102010_0x102010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102010_0x102010");
#endif

    switch (ctx->pc) {
        case 0x102040u: goto label_102040;
        case 0x1020a0u: goto label_1020a0;
        case 0x102150u: goto label_102150;
        case 0x102158u: goto label_102158;
        case 0x102160u: goto label_102160;
        case 0x102174u: goto label_102174;
        case 0x102180u: goto label_102180;
        default: break;
    }

    ctx->pc = 0x102010u;

    // 0x102010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x102010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x102014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x102014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x102018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x102018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10201c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10201cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x102020: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x102020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x102024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x102028: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x102028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x10202c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10202cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102030: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x102030u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x102034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102038: 0xc0408c8  jal         func_102320
    ctx->pc = 0x102038u;
    SET_GPR_U32(ctx, 31, 0x102040u);
    ctx->pc = 0x10203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102038u;
    // 0x10203c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102320u, 0x102038u, 0x102040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102040u;
label_102040:
    // 0x102040: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x102040u;
    {
        const bool branch_taken_0x102040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102040u;
        // 0x102044: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102040) {
            ctx->pc = 0x1021B8u;
            goto label_1021b8;
        }
    }
    ctx->pc = 0x102048u;
    // 0x102048: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x102048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x10204c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10204cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x102050: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x102050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x102054: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x102054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x102058: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x102058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10205c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x10205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x102060: 0x4803c  dsll32      $s0, $a0, 0
    ctx->pc = 0x102060u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 0));
    // 0x102064: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x102064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
    // 0x102068: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x102068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x10206c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x10206cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x102070: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x102070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x102074: 0x0  nop
    ctx->pc = 0x102074u;
    // NOP
    // 0x102078: 0x0  nop
    ctx->pc = 0x102078u;
    // NOP
    // 0x10207c: 0x2010  mfhi        $a0
    ctx->pc = 0x10207cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x102080: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x102080u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x102084: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x102084u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x102088: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x102088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10208c: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x10208cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x102090: 0xe0082a  slt         $at, $a3, $zero
    ctx->pc = 0x102090u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x102094: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x102094u;
    {
        const bool branch_taken_0x102094 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x102098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102094u;
        // 0x102098: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102094) {
            ctx->pc = 0x102108u;
            goto label_102108;
        }
    }
    ctx->pc = 0x10209Cu;
    // 0x10209c: 0x0  nop
    ctx->pc = 0x10209cu;
    // NOP
label_1020a0:
    // 0x1020a0: 0x1272021  addu        $a0, $t1, $a3
    ctx->pc = 0x1020a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1020a4: 0x44043  sra         $t0, $a0, 1
    ctx->pc = 0x1020a4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1020a8: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x1020a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1020ac: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1020acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1020b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1020b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1020b4: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1020b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1020b8: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1020b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1020bc: 0x205082b  sltu        $at, $s0, $a1
    ctx->pc = 0x1020bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1020c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1020C0u;
    {
        const bool branch_taken_0x1020c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1020c0) {
            ctx->pc = 0x1020D0u;
            goto label_1020d0;
        }
    }
    ctx->pc = 0x1020C8u;
    // 0x1020c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1020C8u;
    {
        const bool branch_taken_0x1020c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020C8u;
        // 0x1020cc: 0x2507ffff  addiu       $a3, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020c8) {
            ctx->pc = 0x1020F8u;
            goto label_1020f8;
        }
    }
    ctx->pc = 0x1020D0u;
label_1020d0:
    // 0x1020d0: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x1020d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1020d4: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x1020d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1020d8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1020d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1020dc: 0x90082b  sltu        $at, $a0, $s0
    ctx->pc = 0x1020dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1020e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1020E0u;
    {
        const bool branch_taken_0x1020e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020E0u;
        // 0x1020e4: 0x25090001  addiu       $t1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020e0) {
            ctx->pc = 0x1020F0u;
            goto label_1020f0;
        }
    }
    ctx->pc = 0x1020E8u;
    // 0x1020e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1020E8u;
    {
        const bool branch_taken_0x1020e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1020e8) {
            ctx->pc = 0x1020F8u;
            goto label_1020f8;
        }
    }
    ctx->pc = 0x1020F0u;
label_1020f0:
    // 0x1020f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1020F0u;
    {
        const bool branch_taken_0x1020f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1020f0) {
            ctx->pc = 0x102110u;
            goto label_102110;
        }
    }
    ctx->pc = 0x1020F8u;
label_1020f8:
    // 0x1020f8: 0xe9082a  slt         $at, $a3, $t1
    ctx->pc = 0x1020f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1020fc: 0x1020ffe8  beqz        $at, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1020FCu;
    {
        const bool branch_taken_0x1020fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1020fc) {
            ctx->pc = 0x1020A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1020a0;
        }
    }
    ctx->pc = 0x102104u;
    // 0x102104: 0x0  nop
    ctx->pc = 0x102104u;
    // NOP
label_102108:
    // 0x102108: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x102108u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10210c: 0x0  nop
    ctx->pc = 0x10210cu;
    // NOP
label_102110:
    // 0x102110: 0x11400029  beqz        $t2, . + 4 + (0x29 << 2)
    ctx->pc = 0x102110u;
    {
        const bool branch_taken_0x102110 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x102110) {
            ctx->pc = 0x1021B8u;
            goto label_1021b8;
        }
    }
    ctx->pc = 0x102118u;
    // 0x102118: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x102118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x10211c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10211cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x102120: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102120u;
    {
        const bool branch_taken_0x102120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102120u;
        // 0x102124: 0x25420008  addiu       $v0, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102120) {
            ctx->pc = 0x102130u;
            goto label_102130;
        }
    }
    ctx->pc = 0x102128u;
    // 0x102128: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x102128u;
    {
        const bool branch_taken_0x102128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102128u;
        // 0x10212c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102128) {
            ctx->pc = 0x102138u;
            goto label_102138;
        }
    }
    ctx->pc = 0x102130u;
label_102130:
    // 0x102130: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x102130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x102134: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x102134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_102138:
    // 0x102138: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x102138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x10213c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x10213cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x102140: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x102140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x102144: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x102144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x102148: 0xc0408b4  jal         func_1022D0
    ctx->pc = 0x102148u;
    SET_GPR_U32(ctx, 31, 0x102150u);
    ctx->pc = 0x10214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102148u;
    // 0x10214c: 0x2028823  subu        $s1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1022D0u, 0x102148u, 0x102150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102150u;
label_102150:
    // 0x102150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102154: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x102154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102158:
    // 0x102158: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x102158u;
    SET_GPR_U32(ctx, 31, 0x102160u);
    ctx->pc = 0x10215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102158u;
    // 0x10215c: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x102158u, 0x102160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102160u;
label_102160:
    // 0x102160: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x102160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x102164: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x102164u;
    {
        const bool branch_taken_0x102164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102164u;
        // 0x102168: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102164) {
            ctx->pc = 0x1021B8u;
            goto label_1021b8;
        }
    }
    ctx->pc = 0x10216Cu;
    // 0x10216c: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x10216Cu;
    SET_GPR_U32(ctx, 31, 0x102174u);
    ctx->pc = 0x102170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10216Cu;
    // 0x102170: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x10216Cu, 0x102174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102174u;
label_102174:
    // 0x102174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102178: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x102178u;
    SET_GPR_U32(ctx, 31, 0x102180u);
    ctx->pc = 0x10217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102178u;
    // 0x10217c: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x102178u, 0x102180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102180u;
label_102180:
    // 0x102180: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x102180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x102184: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x102184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x102188: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x102188u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x10218c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10218Cu;
    {
        const bool branch_taken_0x10218c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x102190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10218Cu;
        // 0x102190: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10218c) {
            ctx->pc = 0x1021B8u;
            goto label_1021b8;
        }
    }
    ctx->pc = 0x102194u;
    // 0x102194: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x102194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x102198: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x102198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x10219c: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x10219cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1021a0: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1021A0u;
    {
        const bool branch_taken_0x1021a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1021a0) {
            ctx->pc = 0x102158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102158;
        }
    }
    ctx->pc = 0x1021A8u;
    // 0x1021a8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1021a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1021ac: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1021acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1021b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1021b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1021b4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1021b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1021b8:
    // 0x1021b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1021b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1021bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1021bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1021c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1021c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1021c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1021c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1021c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1021C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1021CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021C8u;
        // 0x1021cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1021C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1021D0u;
}
