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

// Function: sub_0010BFE8
// Address: 0x10bfe8 - 0x10c278
void sub_0010BFE8_0x10bfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BFE8_0x10bfe8");
#endif

    switch (ctx->pc) {
        case 0x10c0d0u: goto label_10c0d0;
        case 0x10c0e0u: goto label_10c0e0;
        case 0x10c0e8u: goto label_10c0e8;
        case 0x10c12cu: goto label_10c12c;
        case 0x10c140u: goto label_10c140;
        case 0x10c164u: goto label_10c164;
        case 0x10c1a8u: goto label_10c1a8;
        case 0x10c1b8u: goto label_10c1b8;
        case 0x10c1e0u: goto label_10c1e0;
        default: break;
    }

    ctx->pc = 0x10bfe8u;

    // 0x10bfe8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10bfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10bfec: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10bff0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x10bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x10bff4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10bff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10bff8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10bff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10bffc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x10bffcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c000: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10c000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10c004: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10c004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10c008: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x10c008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x10c00c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x10c00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x10c010: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x10c010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x10c014: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10c014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10c018: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x10c018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10c01c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10c01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10c020: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10c020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10c024: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10c024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c028: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x10c028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x10c02c: 0x8c8400ec  lw          $a0, 0xEC($a0)
    ctx->pc = 0x10c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x10c030: 0x8cc50184  lw          $a1, 0x184($a2)
    ctx->pc = 0x10c030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 388)));
    // 0x10c034: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x10c034u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10c038: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x10c038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10c03c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10c040: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C040u;
    {
        const bool branch_taken_0x10c040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C040u;
        // 0x10c044: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c040) {
            ctx->pc = 0x10C05Cu;
            goto label_10c05c;
        }
    }
    ctx->pc = 0x10C048u;
    // 0x10c048: 0x8cc400f4  lw          $a0, 0xF4($a2)
    ctx->pc = 0x10c048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 244)));
    // 0x10c04c: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10C04Cu;
    {
        const bool branch_taken_0x10c04c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C04Cu;
        // 0x10c050: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c04c) {
            ctx->pc = 0x10C094u;
            goto label_10c094;
        }
    }
    ctx->pc = 0x10C054u;
    // 0x10c054: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C054u;
    {
        const bool branch_taken_0x10c054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C054u;
        // 0x10c058: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c054) {
            ctx->pc = 0x10C068u;
            goto label_10c068;
        }
    }
    ctx->pc = 0x10C05Cu;
label_10c05c:
    // 0x10c05c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x10c05cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c060: 0x8ce300f4  lw          $v1, 0xF4($a3)
    ctx->pc = 0x10c060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x10c064: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x10c064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_10c068:
    // 0x10c068: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x10c068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10c06c: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x10c06cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x10c070: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C070u;
    {
        const bool branch_taken_0x10c070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C070u;
        // 0x10c074: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c070) {
            ctx->pc = 0x10C084u;
            goto label_10c084;
        }
    }
    ctx->pc = 0x10C078u;
    // 0x10c078: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x10c078u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x10c07c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10C07Cu;
    {
        const bool branch_taken_0x10c07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C07Cu;
        // 0x10c080: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c07c) {
            ctx->pc = 0x10C088u;
            goto label_10c088;
        }
    }
    ctx->pc = 0x10C084u;
label_10c084:
    // 0x10c084: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x10c084u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10c088:
    // 0x10c088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c08c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10C08Cu;
    {
        const bool branch_taken_0x10c08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C08Cu;
        // 0x10c090: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c08c) {
            ctx->pc = 0x10C0BCu;
            goto label_10c0bc;
        }
    }
    ctx->pc = 0x10C094u;
label_10c094:
    // 0x10c094: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x10c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x10c098: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x10c098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10c09c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x10c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x10c0a0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x10c0a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x10c0a4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10c0a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10c0a8: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x10c0a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x10c0ac: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x10c0acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x10c0b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c0b4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x10c0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x10c0b8: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x10c0b8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
label_10c0bc:
    // 0x10c0bc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x10c0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10c0c0: 0x10c00061  beqz        $a2, . + 4 + (0x61 << 2)
    ctx->pc = 0x10C0C0u;
    {
        const bool branch_taken_0x10c0c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C0C0u;
        // 0x10c0c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c0c0) {
            ctx->pc = 0x10C248u;
            goto label_10c248;
        }
    }
    ctx->pc = 0x10C0C8u;
    // 0x10c0c8: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x10c0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x10c0cc: 0x0  nop
    ctx->pc = 0x10c0ccu;
    // NOP
label_10c0d0:
    // 0x10c0d0: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x10c0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c0d4: 0x18c0004f  blez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x10C0D4u;
    {
        const bool branch_taken_0x10c0d4 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x10C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C0D4u;
        // 0x10c0d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c0d4) {
            ctx->pc = 0x10C214u;
            goto label_10c214;
        }
    }
    ctx->pc = 0x10C0DCu;
    // 0x10c0dc: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x10c0dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_10c0e0:
    // 0x10c0e0: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10C0E0u;
    SET_GPR_U32(ctx, 31, 0x10C0E8u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10C0E0u, 0x10C0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0E8u;
label_10c0e8:
    // 0x10c0e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c0ec: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10c0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10c0f0: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x10c0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x10c0f4: 0x34a5d410  ori         $a1, $a1, 0xD410
    ctx->pc = 0x10c0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54288);
    // 0x10c0f8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10c0f8u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x10c0fc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c100: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x10c100u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 18)); // MMIO: 0x1000d410
    // 0x10c104: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x10c104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x10c108: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10c108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10c10c: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x10c10cu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 20)); // MMIO: 0x1000d420
    // 0x10c110: 0x34a5d400  ori         $a1, $a1, 0xD400
    ctx->pc = 0x10c110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54272);
    // 0x10c114: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x10c114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10c118: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10c118u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 3)); // MMIO: 0x1000d400
    // 0x10c11c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C11Cu;
    {
        const bool branch_taken_0x10c11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C11Cu;
        // 0x10c120: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c11c) {
            ctx->pc = 0x10C130u;
            goto label_10c130;
        }
    }
    ctx->pc = 0x10C124u;
    // 0x10c124: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10C124u;
    SET_GPR_U32(ctx, 31, 0x10C12Cu);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10C124u, 0x10C12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C12Cu;
label_10c12c:
    // 0x10c12c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10c130:
    // 0x10c130: 0x2559821  addu        $s3, $s2, $s5
    ctx->pc = 0x10c130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x10c134: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10c134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10c138: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x10c138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x10c13c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x10c13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_10c140:
    // 0x10c140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c140u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x10c144: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10c144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10c148: 0x0  nop
    ctx->pc = 0x10c148u;
    // NOP
    // 0x10c14c: 0x0  nop
    ctx->pc = 0x10c14cu;
    // NOP
    // 0x10c150: 0x0  nop
    ctx->pc = 0x10c150u;
    // NOP
    // 0x10c154: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C154u;
    {
        const bool branch_taken_0x10c154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c154) {
            ctx->pc = 0x10C140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c140;
        }
    }
    ctx->pc = 0x10C15Cu;
    // 0x10c15c: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10C15Cu;
    SET_GPR_U32(ctx, 31, 0x10C164u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10C15Cu, 0x10C164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C164u;
label_10c164:
    // 0x10c164: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c168: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10c168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10c16c: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x10c16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x10c170: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x10c170u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x10c174: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10c174u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x1000d080
    // 0x10c178: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c17c: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x10c17cu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x1000d010
    // 0x10c180: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x10c180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x10c184: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10c184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10c188: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x10c188u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 20)); // MMIO: 0x1000d020
    // 0x10c18c: 0x34a5d000  ori         $a1, $a1, 0xD000
    ctx->pc = 0x10c18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53248);
    // 0x10c190: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x10c190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10c194: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10c194u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3)); // MMIO: 0x1000d000
    // 0x10c198: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C198u;
    {
        const bool branch_taken_0x10c198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C198u;
        // 0x10c19c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c198) {
            ctx->pc = 0x10C1ACu;
            goto label_10c1ac;
        }
    }
    ctx->pc = 0x10C1A0u;
    // 0x10c1a0: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10C1A0u;
    SET_GPR_U32(ctx, 31, 0x10C1A8u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10C1A0u, 0x10C1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C1A8u;
label_10c1a8:
    // 0x10c1a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10c1ac:
    // 0x10c1ac: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x10c1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x10c1b0: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x10c1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x10c1b4: 0x0  nop
    ctx->pc = 0x10c1b4u;
    // NOP
label_10c1b8:
    // 0x10c1b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d000
    // 0x10c1bc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10c1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10c1c0: 0x0  nop
    ctx->pc = 0x10c1c0u;
    // NOP
    // 0x10c1c4: 0x0  nop
    ctx->pc = 0x10c1c4u;
    // NOP
    // 0x10c1c8: 0x0  nop
    ctx->pc = 0x10c1c8u;
    // NOP
    // 0x10c1cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C1CCu;
    {
        const bool branch_taken_0x10c1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c1cc) {
            ctx->pc = 0x10C1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c1b8;
        }
    }
    ctx->pc = 0x10C1D4u;
    // 0x10c1d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c1d8: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x10c1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x10c1dc: 0x0  nop
    ctx->pc = 0x10c1dcu;
    // NOP
label_10c1e0:
    // 0x10c1e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d020
    // 0x10c1e4: 0x0  nop
    ctx->pc = 0x10c1e4u;
    // NOP
    // 0x10c1e8: 0x0  nop
    ctx->pc = 0x10c1e8u;
    // NOP
    // 0x10c1ec: 0x0  nop
    ctx->pc = 0x10c1ecu;
    // NOP
    // 0x10c1f0: 0x0  nop
    ctx->pc = 0x10c1f0u;
    // NOP
    // 0x10c1f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C1F4u;
    {
        const bool branch_taken_0x10c1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c1f4) {
            ctx->pc = 0x10C1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c1e0;
        }
    }
    ctx->pc = 0x10C1FCu;
    // 0x10c1fc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x10c1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c200: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x10c200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10c204: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x10C204u;
    {
        const bool branch_taken_0x10c204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C204u;
        // 0x10c208: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c204) {
            ctx->pc = 0x10C0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c0e0;
        }
    }
    ctx->pc = 0x10C20Cu;
    // 0x10c20c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10C20Cu;
    {
        const bool branch_taken_0x10c20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C20Cu;
        // 0x10c210: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c20c) {
            ctx->pc = 0x10C21Cu;
            goto label_10c21c;
        }
    }
    ctx->pc = 0x10C214u;
label_10c214:
    // 0x10c214: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x10c214u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10c218: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x10c218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10c21c:
    // 0x10c21c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10c21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c220: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x10c220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x10c224: 0x8ce200f8  lw          $v0, 0xF8($a3)
    ctx->pc = 0x10c224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 248)));
    // 0x10c228: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x10c228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10c22c: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x10c22cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x10c230: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x10c230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c234: 0xe00013  mtlo        $a3
    ctx->pc = 0x10c234u;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x10c238: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x10c238u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x10c23c: 0x3812  mflo        $a3
    ctx->pc = 0x10c23cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x10c240: 0x1480ffa3  bnez        $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x10C240u;
    {
        const bool branch_taken_0x10c240 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C240u;
        // 0x10c244: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c240) {
            ctx->pc = 0x10C0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c0d0;
        }
    }
    ctx->pc = 0x10C248u;
label_10c248:
    // 0x10c248: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10c248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10c24c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x10c24cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10c250: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x10c250u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10c254: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10c254u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10c258: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x10c258u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10c25c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x10c25cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10c260: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10c260u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c264: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10c264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c268: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10c268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c26c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10c26cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c270: 0x3e00008  jr          $ra
    ctx->pc = 0x10C270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C270u;
        // 0x10c274: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C278u;
}
