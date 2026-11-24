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

// Function: sub_00105FD8
// Address: 0x105fd8 - 0x1066dc
void sub_00105FD8_0x105fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105FD8_0x105fd8");
#endif

    switch (ctx->pc) {
        case 0x1060f4u: goto label_1060f4;
        case 0x106134u: goto label_106134;
        case 0x106160u: goto label_106160;
        case 0x1061a0u: goto label_1061a0;
        case 0x1061dcu: goto label_1061dc;
        case 0x10621cu: goto label_10621c;
        case 0x106264u: goto label_106264;
        case 0x106368u: goto label_106368;
        case 0x106408u: goto label_106408;
        case 0x106450u: goto label_106450;
        case 0x1064a0u: goto label_1064a0;
        case 0x1064b8u: goto label_1064b8;
        case 0x10655cu: goto label_10655c;
        case 0x10659cu: goto label_10659c;
        case 0x1065f4u: goto label_1065f4;
        case 0x10664cu: goto label_10664c;
        case 0x106694u: goto label_106694;
        case 0x1066acu: goto label_1066ac;
        default: break;
    }

    ctx->pc = 0x105fd8u;

    // 0x105fd8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x105fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x105fdc: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x105fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x105fe0: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x105fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x105fe4: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x105fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x105fe8: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x105fe8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fec: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x105fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x105ff0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x105ff0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ff4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x105ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x105ff8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x105ff8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ffc: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x105ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x106000: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x106000u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106004: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x106004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x106008: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x106008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10600c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x10600cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x106010: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x106010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106014: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x106014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x106018: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10601c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x10601cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x106020: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x106020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106024: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x106024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x106028: 0x8e220820  lw          $v0, 0x820($s1)
    ctx->pc = 0x106028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x10602c: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x10602cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x106030: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x106030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x106034: 0x30ec0008  andi        $t4, $a3, 0x8
    ctx->pc = 0x106034u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x106038: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x106038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x10603c: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x10603Cu;
    {
        const bool branch_taken_0x10603c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x106040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10603Cu;
        // 0x106040: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10603c) {
            ctx->pc = 0x106054u;
            goto label_106054;
        }
    }
    ctx->pc = 0x106044u;
    // 0x106044: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x106044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x106048: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x106048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10604c: 0x1462011c  bne         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x10604Cu;
    {
        const bool branch_taken_0x10604c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x106050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10604Cu;
        // 0x106050: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10604c) {
            ctx->pc = 0x1064C0u;
            goto label_1064c0;
        }
    }
    ctx->pc = 0x106054u;
label_106054:
    // 0x106054: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x106054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x106058: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x106058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10605c: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x10605Cu;
    {
        const bool branch_taken_0x10605c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x106060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10605Cu;
        // 0x106060: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10605c) {
            ctx->pc = 0x10626Cu;
            goto label_10626c;
        }
    }
    ctx->pc = 0x106064u;
    // 0x106064: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x106064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106068: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106068u;
    {
        const bool branch_taken_0x106068 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x106068) {
            ctx->pc = 0x10606Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106068u;
            // 0x10606c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10607Cu;
            goto label_10607c;
        }
    }
    ctx->pc = 0x106070u;
    // 0x106070: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x106070u;
    {
        const bool branch_taken_0x106070 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x106070) {
            ctx->pc = 0x1060B0u;
            goto label_1060b0;
        }
    }
    ctx->pc = 0x106078u;
    // 0x106078: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x106078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_10607c:
    // 0x10607c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10607cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106080: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x106080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x106084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106088: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x106088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x10608c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10608cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106090: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x106090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x106094: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106098: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x106098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x10609c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x10609cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1060a0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1060a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1060a4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1060a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060a8: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1060A8u;
    {
        const bool branch_taken_0x1060a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1060ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060A8u;
        // 0x1060ac: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060a8) {
            ctx->pc = 0x106498u;
            goto label_106498;
        }
    }
    ctx->pc = 0x1060B0u;
label_1060b0:
    // 0x1060b0: 0x16930022  bne         $s4, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x1060B0u;
    {
        const bool branch_taken_0x1060b0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x1060B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060B0u;
        // 0x1060b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060b0) {
            ctx->pc = 0x10613Cu;
            goto label_10613c;
        }
    }
    ctx->pc = 0x1060B8u;
    // 0x1060b8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1060b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1060bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1060bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1060c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1060c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060c4: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x1060c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x1060c8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1060c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1060cc: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x1060ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1060d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1060d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1060d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1060d8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1060d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1060dc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1060dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1060e0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1060e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060e4: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x1060e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x1060e8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1060e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060ec: 0xc041a4c  jal         func_106930
    ctx->pc = 0x1060ECu;
    SET_GPR_U32(ctx, 31, 0x1060F4u);
    ctx->pc = 0x1060F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1060ECu;
    // 0x1060f0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106930u, 0x1060ECu, 0x1060F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060F4u;
label_1060f4:
    // 0x1060f4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1060f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1060f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1060f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060fc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1060fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x106100: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x106100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106104: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x106104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x106108: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x106108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10610c: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x10610cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x106110: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106110u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106114: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x106114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x106118: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x106118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10611c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10611cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x106120: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106120u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106124: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x106124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x106128: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x106128u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10612c: 0xc041a4c  jal         func_106930
    ctx->pc = 0x10612Cu;
    SET_GPR_U32(ctx, 31, 0x106134u);
    ctx->pc = 0x106130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10612Cu;
    // 0x106130: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106930u, 0x10612Cu, 0x106134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106134u;
label_106134:
    // 0x106134: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x106134u;
    {
        const bool branch_taken_0x106134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106134u;
        // 0x106138: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106134) {
            ctx->pc = 0x1064BCu;
            goto label_1064bc;
        }
    }
    ctx->pc = 0x10613Cu;
label_10613c:
    // 0x10613c: 0x16830045  bne         $s4, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x10613Cu;
    {
        const bool branch_taken_0x10613c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x106140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10613Cu;
        // 0x106140: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10613c) {
            ctx->pc = 0x106254u;
            goto label_106254;
        }
    }
    ctx->pc = 0x106144u;
    // 0x106144: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x106144u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x106148: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x106148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10614c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x10614cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106154: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x106154u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x106158: 0xc041794  jal         func_105E50
    ctx->pc = 0x106158u;
    SET_GPR_U32(ctx, 31, 0x106160u);
    ctx->pc = 0x10615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106158u;
    // 0x10615c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x106158u, 0x106160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106160u;
label_106160:
    // 0x106160: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x106160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x106164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106168: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x106168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10616c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10616cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106170: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x106170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x106174: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x106174u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x106178: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x106178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x10617c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10617cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106180: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x106180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x106184: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106188: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x106188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x10618c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x10618cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106190: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x106190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x106194: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106194u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106198: 0xc041a4c  jal         func_106930
    ctx->pc = 0x106198u;
    SET_GPR_U32(ctx, 31, 0x1061A0u);
    ctx->pc = 0x10619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106198u;
    // 0x10619c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106930u, 0x106198u, 0x1061A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1061A0u;
label_1061a0:
    // 0x1061a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1061a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1061a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1061a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061a8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1061a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1061ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1061acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1061b0: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x1061b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x1061b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1061b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061b8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1061b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1061bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1061bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061c0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1061c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1061c4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1061c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1061c8: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1061c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1061cc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1061ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061d0: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x1061d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x1061d4: 0xc041a4c  jal         func_106930
    ctx->pc = 0x1061D4u;
    SET_GPR_U32(ctx, 31, 0x1061DCu);
    ctx->pc = 0x1061D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1061D4u;
    // 0x1061d8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106930u, 0x1061D4u, 0x1061DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1061DCu;
label_1061dc:
    // 0x1061dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1061dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1061e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1061e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1061e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1061e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1061e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1061ec: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x1061ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x1061f0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1061f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1061f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1061f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1061f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1061f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1061fc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1061fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x106200: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106204: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x106204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x106208: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x106208u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10620c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x10620cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x106210: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106210u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106214: 0xc041a4c  jal         func_106930
    ctx->pc = 0x106214u;
    SET_GPR_U32(ctx, 31, 0x10621Cu);
    ctx->pc = 0x106218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106214u;
    // 0x106218: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106930u, 0x106214u, 0x10621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10621Cu;
label_10621c:
    // 0x10621c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x10621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x106220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106224: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x106224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x106228: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10622c: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x10622cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x106230: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x106230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106234: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x106234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x106238: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10623c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x10623cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x106240: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x106240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106244: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x106244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x106248: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106248u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10624c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x10624Cu;
    {
        const bool branch_taken_0x10624c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10624Cu;
        // 0x106250: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10624c) {
            ctx->pc = 0x106498u;
            goto label_106498;
        }
    }
    ctx->pc = 0x106254u;
label_106254:
    // 0x106254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106258: 0x24a51e18  addiu       $a1, $a1, 0x1E18
    ctx->pc = 0x106258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7704));
    // 0x10625c: 0xc04354c  jal         func_10D530
    ctx->pc = 0x10625Cu;
    SET_GPR_U32(ctx, 31, 0x106264u);
    ctx->pc = 0x106260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10625Cu;
    // 0x106260: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D530u, 0x10625Cu, 0x106264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106264u;
label_106264:
    // 0x106264: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x106264u;
    {
        const bool branch_taken_0x106264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106264u;
        // 0x106268: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106264) {
            ctx->pc = 0x1064BCu;
            goto label_1064bc;
        }
    }
    ctx->pc = 0x10626Cu;
label_10626c:
    // 0x10626c: 0x8e2701d8  lw          $a3, 0x1D8($s1)
    ctx->pc = 0x10626cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x106270: 0x8e2501e8  lw          $a1, 0x1E8($s1)
    ctx->pc = 0x106270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x106274: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x106274u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x106278: 0x8e2401dc  lw          $a0, 0x1DC($s1)
    ctx->pc = 0x106278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x10627c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10627cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106280: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x106280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x106284: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x106284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106288: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x106288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x10628c: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x10628cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x106290: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x106290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x106294: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x106294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x106298: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x106298u;
    {
        const bool branch_taken_0x106298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x10629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106298u;
        // 0x10629c: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106298) {
            ctx->pc = 0x1062B8u;
            goto label_1062b8;
        }
    }
    ctx->pc = 0x1062A0u;
    // 0x1062a0: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x1062a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1062a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1062A4u;
    {
        const bool branch_taken_0x1062a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062A4u;
        // 0x1062a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062a4) {
            ctx->pc = 0x1062BCu;
            goto label_1062bc;
        }
    }
    ctx->pc = 0x1062ACu;
    // 0x1062ac: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1062acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1062b0: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x1062b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
    // 0x1062b4: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x1062b4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1062b8:
    // 0x1062b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1062b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1062bc:
    // 0x1062bc: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1062BCu;
    {
        const bool branch_taken_0x1062bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1062bc) {
            ctx->pc = 0x1062C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1062BCu;
            // 0x1062c0: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1062D0u;
            goto label_1062d0;
        }
    }
    ctx->pc = 0x1062C4u;
    // 0x1062c4: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1062C4u;
    {
        const bool branch_taken_0x1062c4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1062C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062C4u;
        // 0x1062c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062c4) {
            ctx->pc = 0x10630Cu;
            goto label_10630c;
        }
    }
    ctx->pc = 0x1062CCu;
    // 0x1062cc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1062ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1062d0:
    // 0x1062d0: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1062d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1062d4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1062d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1062d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1062d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062dc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1062dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1062e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1062e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1062e4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1062e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1062e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1062e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1062ec: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1062ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1062f0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1062f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1062f4: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x1062f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1062f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1062f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062fc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1062fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x106300: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106304: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x106304u;
    {
        const bool branch_taken_0x106304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106304u;
        // 0x106308: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106304) {
            ctx->pc = 0x10648Cu;
            goto label_10648c;
        }
    }
    ctx->pc = 0x10630Cu;
label_10630c:
    // 0x10630c: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x10630Cu;
    {
        const bool branch_taken_0x10630c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x106310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10630Cu;
        // 0x106310: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10630c) {
            ctx->pc = 0x1063DCu;
            goto label_1063dc;
        }
    }
    ctx->pc = 0x106314u;
    // 0x106314: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x106314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x106318: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x106318u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x10631c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x10631cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x106320: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x106320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x106324: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x106324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10632c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x106330: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x106330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x106334: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x106334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x106338: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x106338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10633c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10633cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106344: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106348: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10634c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10634cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x106350: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106350u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106354: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x106354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x106358: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x106358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10635c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x10635cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106360: 0xc041a4c  jal         func_106930
    ctx->pc = 0x106360u;
    SET_GPR_U32(ctx, 31, 0x106368u);
    ctx->pc = 0x106364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106360u;
    // 0x106364: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106930u, 0x106360u, 0x106368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106368u;
label_106368:
    // 0x106368: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x106368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x10636c: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x10636Cu;
    {
        const bool branch_taken_0x10636c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x106370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10636Cu;
        // 0x106370: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10636c) {
            ctx->pc = 0x106390u;
            goto label_106390;
        }
    }
    ctx->pc = 0x106374u;
    // 0x106374: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x106374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x106378: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106378u;
    {
        const bool branch_taken_0x106378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106378u;
        // 0x10637c: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106378) {
            ctx->pc = 0x106394u;
            goto label_106394;
        }
    }
    ctx->pc = 0x106380u;
    // 0x106380: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x106380u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106384: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x106384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x106388: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106388u;
    {
        const bool branch_taken_0x106388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106388u;
        // 0x10638c: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106388) {
            ctx->pc = 0x106394u;
            goto label_106394;
        }
    }
    ctx->pc = 0x106390u;
label_106390:
    // 0x106390: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x106390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_106394:
    // 0x106394: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x106394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x106398: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x106398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10639c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x10639cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1063a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1063a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1063a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1063a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1063a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1063acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1063b0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1063b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1063b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1063b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1063b8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1063b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1063bc: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1063bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1063c0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1063c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1063c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1063c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063c8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1063c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1063cc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1063ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1063d0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1063d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063d4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1063D4u;
    {
        const bool branch_taken_0x1063d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1063D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063D4u;
        // 0x1063d8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063d4) {
            ctx->pc = 0x106498u;
            goto label_106498;
        }
    }
    ctx->pc = 0x1063DCu;
label_1063dc:
    // 0x1063dc: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1063DCu;
    {
        const bool branch_taken_0x1063dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1063E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063DCu;
        // 0x1063e0: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063dc) {
            ctx->pc = 0x1064A8u;
            goto label_1064a8;
        }
    }
    ctx->pc = 0x1063E4u;
    // 0x1063e4: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x1063e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1063e8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1063e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1063ec: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1063ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1063f0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1063f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063f4: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x1063f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1063f8: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x1063f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x1063fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1063fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106400: 0xc041794  jal         func_105E50
    ctx->pc = 0x106400u;
    SET_GPR_U32(ctx, 31, 0x106408u);
    ctx->pc = 0x106404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106400u;
    // 0x106404: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x106400u, 0x106408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106408u;
label_106408:
    // 0x106408: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x106408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10640c: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x10640cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x106410: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x106410u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x106414: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x106414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x106418: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x106418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10641c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10641cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106420: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106428: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x106428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x10642c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10642cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106430: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x106430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x106434: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106434u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106438: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x106438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x10643c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x10643cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x106440: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x106440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x106444: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106444u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106448: 0xc041a4c  jal         func_106930
    ctx->pc = 0x106448u;
    SET_GPR_U32(ctx, 31, 0x106450u);
    ctx->pc = 0x10644Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106448u;
    // 0x10644c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106930u, 0x106448u, 0x106450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106450u;
label_106450:
    // 0x106450: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x106450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x106454: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106458: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x106458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x10645c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x10645cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x106460: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x106460u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x106464: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x106464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x106468: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x106468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10646c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x10646cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x106470: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x106470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10647c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x10647cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x106480: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106484: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x106484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x106488: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10648c:
    // 0x10648c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10648cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106490: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x106490u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x106494: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106494u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_106498:
    // 0x106498: 0xc041a4c  jal         func_106930
    ctx->pc = 0x106498u;
    SET_GPR_U32(ctx, 31, 0x1064A0u);
    ctx->pc = 0x10649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106498u;
    // 0x10649c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106930u, 0x106498u, 0x1064A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1064A0u;
label_1064a0:
    // 0x1064a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1064A0u;
    {
        const bool branch_taken_0x1064a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064A0u;
        // 0x1064a4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064a0) {
            ctx->pc = 0x1064BCu;
            goto label_1064bc;
        }
    }
    ctx->pc = 0x1064A8u;
label_1064a8:
    // 0x1064a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1064a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064ac: 0x24a51e38  addiu       $a1, $a1, 0x1E38
    ctx->pc = 0x1064acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7736));
    // 0x1064b0: 0xc04354c  jal         func_10D530
    ctx->pc = 0x1064B0u;
    SET_GPR_U32(ctx, 31, 0x1064B8u);
    ctx->pc = 0x1064B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1064B0u;
    // 0x1064b4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D530u, 0x1064B0u, 0x1064B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1064B8u;
label_1064b8:
    // 0x1064b8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1064b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1064bc:
    // 0x1064bc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1064bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1064c0:
    // 0x1064c0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1064c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1064c4: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1064C4u;
    {
        const bool branch_taken_0x1064c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064C4u;
        // 0x1064c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064c4) {
            ctx->pc = 0x1066ACu;
            goto label_1066ac;
        }
    }
    ctx->pc = 0x1064CCu;
    // 0x1064cc: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x1064ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x1064d0: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1064D0u;
    {
        const bool branch_taken_0x1064d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1064D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064D0u;
        // 0x1064d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064d0) {
            ctx->pc = 0x1065A4u;
            goto label_1065a4;
        }
    }
    ctx->pc = 0x1064D8u;
    // 0x1064d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1064d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1064dc: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1064DCu;
    {
        const bool branch_taken_0x1064dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1064E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064DCu;
        // 0x1064e0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064dc) {
            ctx->pc = 0x10651Cu;
            goto label_10651c;
        }
    }
    ctx->pc = 0x1064E4u;
    // 0x1064e4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1064e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1064e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1064e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064ec: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1064ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1064f0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1064f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064f4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1064f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1064f8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1064f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1064fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x106500: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106504: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x106504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x106508: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10650c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10650cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x106510: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106514: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x106514u;
    {
        const bool branch_taken_0x106514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106514u;
        // 0x106518: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106514) {
            ctx->pc = 0x106594u;
            goto label_106594;
        }
    }
    ctx->pc = 0x10651Cu;
label_10651c:
    // 0x10651c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x10651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x106520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106524: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x106524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x106528: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10652c: 0x8e2501cc  lw          $a1, 0x1CC($s1)
    ctx->pc = 0x10652cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x106530: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x106530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x106534: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x106534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x106538: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106538u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10653c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x10653cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x106540: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x106540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106544: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x106544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x106548: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106548u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10654c: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x10654cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x106550: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x106550u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106554: 0xc041a4c  jal         func_106930
    ctx->pc = 0x106554u;
    SET_GPR_U32(ctx, 31, 0x10655Cu);
    ctx->pc = 0x106558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106554u;
    // 0x106558: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106930u, 0x106554u, 0x10655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10655Cu;
label_10655c:
    // 0x10655c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x10655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x106560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106564: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x106564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x106568: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106568u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10656c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10656cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x106570: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x106570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x106574: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x106574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x106578: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x106578u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10657c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10657cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x106580: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x106580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106584: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x106584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x106588: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10658c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x10658cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106590: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x106590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_106594:
    // 0x106594: 0xc041a4c  jal         func_106930
    ctx->pc = 0x106594u;
    SET_GPR_U32(ctx, 31, 0x10659Cu);
    ctx->pc = 0x106598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106594u;
    // 0x106598: 0x8c8501cc  lw          $a1, 0x1CC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106930u, 0x106594u, 0x10659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10659Cu;
label_10659c:
    // 0x10659c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x10659Cu;
    {
        const bool branch_taken_0x10659c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1065A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10659Cu;
        // 0x1065a0: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10659c) {
            ctx->pc = 0x1066B0u;
            goto label_1066b0;
        }
    }
    ctx->pc = 0x1065A4u;
label_1065a4:
    // 0x1065a4: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1065A4u;
    {
        const bool branch_taken_0x1065a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1065A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065A4u;
        // 0x1065a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065a4) {
            ctx->pc = 0x1065FCu;
            goto label_1065fc;
        }
    }
    ctx->pc = 0x1065ACu;
    // 0x1065ac: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x1065acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1065b0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1065B0u;
    {
        const bool branch_taken_0x1065b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1065b0) {
            ctx->pc = 0x1065B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1065B0u;
            // 0x1065b4: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1065BCu;
            goto label_1065bc;
        }
    }
    ctx->pc = 0x1065B8u;
    // 0x1065b8: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x1065b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_1065bc:
    // 0x1065bc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1065bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1065c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1065c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065c4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1065c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1065c8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1065c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065cc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1065ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1065d0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1065d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1065d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1065d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1065d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065dc: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1065dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1065e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1065e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065e4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1065e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1065e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1065e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065ec: 0xc041a4c  jal         func_106930
    ctx->pc = 0x1065ECu;
    SET_GPR_U32(ctx, 31, 0x1065F4u);
    ctx->pc = 0x1065F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1065ECu;
    // 0x1065f0: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106930u, 0x1065ECu, 0x1065F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1065F4u;
label_1065f4:
    // 0x1065f4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1065F4u;
    {
        const bool branch_taken_0x1065f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1065F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065F4u;
        // 0x1065f8: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065f4) {
            ctx->pc = 0x1066B0u;
            goto label_1066b0;
        }
    }
    ctx->pc = 0x1065FCu;
label_1065fc:
    // 0x1065fc: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1065FCu;
    {
        const bool branch_taken_0x1065fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x106600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065FCu;
        // 0x106600: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065fc) {
            ctx->pc = 0x10669Cu;
            goto label_10669c;
        }
    }
    ctx->pc = 0x106604u;
    // 0x106604: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x106604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x106608: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x106608u;
    {
        const bool branch_taken_0x106608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106608) {
            ctx->pc = 0x10660Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106608u;
            // 0x10660c: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106614u;
            goto label_106614;
        }
    }
    ctx->pc = 0x106610u;
    // 0x106610: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x106610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_106614:
    // 0x106614: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x106614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x106618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10661c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x10661cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x106620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106624: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x106624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x106628: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10662c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x10662cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x106630: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106634: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x106634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x106638: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x106638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10663c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x10663cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x106640: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106640u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106644: 0xc041a4c  jal         func_106930
    ctx->pc = 0x106644u;
    SET_GPR_U32(ctx, 31, 0x10664Cu);
    ctx->pc = 0x106648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106644u;
    // 0x106648: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106930u, 0x106644u, 0x10664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10664Cu;
label_10664c:
    // 0x10664c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x10664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x106650: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x106650u;
    {
        const bool branch_taken_0x106650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106650) {
            ctx->pc = 0x106654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106650u;
            // 0x106654: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10665Cu;
            goto label_10665c;
        }
    }
    ctx->pc = 0x106658u;
    // 0x106658: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x106658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_10665c:
    // 0x10665c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x10665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x106660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106664: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x106664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x106668: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x106668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10666c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10666cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x106670: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x106670u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106674: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x106674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x106678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10667c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x10667cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x106680: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106684: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x106684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x106688: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x106688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10668c: 0xc041a4c  jal         func_106930
    ctx->pc = 0x10668Cu;
    SET_GPR_U32(ctx, 31, 0x106694u);
    ctx->pc = 0x106690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10668Cu;
    // 0x106690: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106930u, 0x10668Cu, 0x106694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106694u;
label_106694:
    // 0x106694: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106694u;
    {
        const bool branch_taken_0x106694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106694u;
        // 0x106698: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106694) {
            ctx->pc = 0x1066B0u;
            goto label_1066b0;
        }
    }
    ctx->pc = 0x10669Cu;
label_10669c:
    // 0x10669c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066a0: 0x24a51e58  addiu       $a1, $a1, 0x1E58
    ctx->pc = 0x1066a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7768));
    // 0x1066a4: 0xc04354c  jal         func_10D530
    ctx->pc = 0x1066A4u;
    SET_GPR_U32(ctx, 31, 0x1066ACu);
    ctx->pc = 0x1066A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1066A4u;
    // 0x1066a8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D530u, 0x1066A4u, 0x1066ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1066ACu;
label_1066ac:
    // 0x1066ac: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1066acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1066b0:
    // 0x1066b0: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1066b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1066b4: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x1066b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1066b8: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1066b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1066bc: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x1066bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1066c0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1066c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1066c4: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1066c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1066c8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1066c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1066cc: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1066ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1066d0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1066d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1066d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1066D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1066D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066D4u;
        // 0x1066d8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1066D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1066DCu;
}
