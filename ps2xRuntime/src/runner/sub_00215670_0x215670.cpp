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

// Function: sub_00215670
// Address: 0x215670 - 0x2158b0
void sub_00215670_0x215670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215670_0x215670");
#endif

    switch (ctx->pc) {
        case 0x2156b8u: goto label_2156b8;
        case 0x2156d8u: goto label_2156d8;
        case 0x2156f8u: goto label_2156f8;
        case 0x21575cu: goto label_21575c;
        case 0x21576cu: goto label_21576c;
        case 0x2157b4u: goto label_2157b4;
        case 0x2157ccu: goto label_2157cc;
        case 0x2157e0u: goto label_2157e0;
        case 0x21584cu: goto label_21584c;
        case 0x21586cu: goto label_21586c;
        case 0x215888u: goto label_215888;
        default: break;
    }

    ctx->pc = 0x215670u;

    // 0x215670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x215670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x215674: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x215674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x215678: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x215678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21567c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x21567cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x215680: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x215680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215684: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x215684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x215688: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x215688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21568c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x21568cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x215690: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x215690u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215694: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x215694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x215698: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21569c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x21569cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2156a0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2156a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2156a4: 0x8e301fc8  lw          $s0, 0x1FC8($s1)
    ctx->pc = 0x2156a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8136)));
    // 0x2156a8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2156a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2156ac: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2156acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x2156b0: 0xc083d42  jal         func_20F508
    ctx->pc = 0x2156B0u;
    SET_GPR_U32(ctx, 31, 0x2156B8u);
    ctx->pc = 0x2156B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2156B0u;
    // 0x2156b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F508u, 0x2156B0u, 0x2156B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2156B8u;
label_2156b8:
    // 0x2156b8: 0x54400076  bnel        $v0, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x2156B8u;
    {
        const bool branch_taken_0x2156b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2156b8) {
            ctx->pc = 0x2156BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2156B8u;
            // 0x2156bc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215894u;
            goto label_215894;
        }
    }
    ctx->pc = 0x2156C0u;
    // 0x2156c0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2156c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2156c4: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x2156C4u;
    {
        const bool branch_taken_0x2156c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2156C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156C4u;
        // 0x2156c8: 0x240500ce  addiu       $a1, $zero, 0xCE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156c4) {
            ctx->pc = 0x215890u;
            goto label_215890;
        }
    }
    ctx->pc = 0x2156CCu;
    // 0x2156cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2156ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2156d0: 0xc0856d8  jal         func_215B60
    ctx->pc = 0x2156D0u;
    SET_GPR_U32(ctx, 31, 0x2156D8u);
    ctx->pc = 0x2156D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2156D0u;
    // 0x2156d4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B60u, 0x2156D0u, 0x2156D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2156D8u;
label_2156d8:
    // 0x2156d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2156d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2156dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2156dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2156e0: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2156E0u;
    {
        const bool branch_taken_0x2156e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2156E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156E0u;
        // 0x2156e4: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156e0) {
            ctx->pc = 0x215730u;
            goto label_215730;
        }
    }
    ctx->pc = 0x2156E8u;
    // 0x2156e8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2156E8u;
    {
        const bool branch_taken_0x2156e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2156ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156E8u;
        // 0x2156ec: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156e8) {
            ctx->pc = 0x215700u;
            goto label_215700;
        }
    }
    ctx->pc = 0x2156F0u;
    // 0x2156f0: 0xc08569c  jal         func_215A70
    ctx->pc = 0x2156F0u;
    SET_GPR_U32(ctx, 31, 0x2156F8u);
    ctx->pc = 0x2156F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2156F0u;
    // 0x2156f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A70u, 0x2156F0u, 0x2156F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2156F8u;
label_2156f8:
    // 0x2156f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2156F8u;
    {
        const bool branch_taken_0x2156f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2156FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156F8u;
        // 0x2156fc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156f8) {
            ctx->pc = 0x215718u;
            goto label_215718;
        }
    }
    ctx->pc = 0x215700u;
label_215700:
    // 0x215700: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x215700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x215704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x215704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x215708: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x215708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x21570c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x21570cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x215710: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x215710u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x215714: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x215714u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_215718:
    // 0x215718: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x215718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21571c: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x21571Cu;
    {
        const bool branch_taken_0x21571c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x215720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21571Cu;
        // 0x215720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21571c) {
            ctx->pc = 0x215890u;
            goto label_215890;
        }
    }
    ctx->pc = 0x215724u;
    // 0x215724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215728: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x215728u;
    {
        const bool branch_taken_0x215728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215728u;
        // 0x21572c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215728) {
            ctx->pc = 0x21588Cu;
            goto label_21588c;
        }
    }
    ctx->pc = 0x215730u;
label_215730:
    // 0x215730: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x215730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215734: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x215734u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x215738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x215738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21573c: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x21573cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x215740: 0x14800053  bnez        $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x215740u;
    {
        const bool branch_taken_0x215740 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215740u;
        // 0x215744: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215740) {
            ctx->pc = 0x215890u;
            goto label_215890;
        }
    }
    ctx->pc = 0x215748u;
    // 0x215748: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21574c: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x21574cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x215750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215754: 0xc083e4a  jal         func_20F928
    ctx->pc = 0x215754u;
    SET_GPR_U32(ctx, 31, 0x21575Cu);
    ctx->pc = 0x215758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215754u;
    // 0x215758: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F928u, 0x215754u, 0x21575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21575Cu;
label_21575c:
    // 0x21575c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x21575cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215760: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x215760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215764: 0xc08562c  jal         func_2158B0
    ctx->pc = 0x215764u;
    SET_GPR_U32(ctx, 31, 0x21576Cu);
    ctx->pc = 0x215768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215764u;
    // 0x215768: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2158B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2158B0u, 0x215764u, 0x21576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21576Cu;
label_21576c:
    // 0x21576c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21576Cu;
    {
        const bool branch_taken_0x21576c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21576Cu;
        // 0x215770: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21576c) {
            ctx->pc = 0x2157CCu;
            goto label_2157cc;
        }
    }
    ctx->pc = 0x215774u;
    // 0x215774: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x215774u;
    {
        const bool branch_taken_0x215774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x215778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215774u;
        // 0x215778: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215774) {
            ctx->pc = 0x215790u;
            goto label_215790;
        }
    }
    ctx->pc = 0x21577Cu;
    // 0x21577c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x21577cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215780: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x215780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x215784: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x215784u;
    {
        const bool branch_taken_0x215784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215784u;
        // 0x215788: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215784) {
            ctx->pc = 0x215798u;
            goto label_215798;
        }
    }
    ctx->pc = 0x21578Cu;
    // 0x21578c: 0x0  nop
    ctx->pc = 0x21578cu;
    // NOP
label_215790:
    // 0x215790: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x215790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215794: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x215794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_215798:
    // 0x215798: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x215798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21579c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x21579Cu;
    {
        const bool branch_taken_0x21579c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2157A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21579Cu;
        // 0x2157a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21579c) {
            ctx->pc = 0x2157CCu;
            goto label_2157cc;
        }
    }
    ctx->pc = 0x2157A4u;
    // 0x2157a4: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x2157a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x2157a8: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x2157a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2157ac: 0xc08572e  jal         func_215CB8
    ctx->pc = 0x2157ACu;
    SET_GPR_U32(ctx, 31, 0x2157B4u);
    ctx->pc = 0x2157B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2157ACu;
    // 0x2157b0: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215CB8u, 0x2157ACu, 0x2157B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2157B4u;
label_2157b4:
    // 0x2157b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2157b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157b8: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2157b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2157bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2157bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2157c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157c4: 0xc083e66  jal         func_20F998
    ctx->pc = 0x2157C4u;
    SET_GPR_U32(ctx, 31, 0x2157CCu);
    ctx->pc = 0x2157C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2157C4u;
    // 0x2157c8: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F998u, 0x2157C4u, 0x2157CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2157CCu;
label_2157cc:
    // 0x2157cc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2157ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2157d0: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2157D0u;
    {
        const bool branch_taken_0x2157d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2157d0) {
            ctx->pc = 0x215864u;
            goto label_215864;
        }
    }
    ctx->pc = 0x2157D8u;
    // 0x2157d8: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x2157D8u;
    SET_GPR_U32(ctx, 31, 0x2157E0u);
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x2157D8u, 0x2157E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2157E0u;
label_2157e0:
    // 0x2157e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2157e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157e4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2157e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2157e8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2157e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157ec: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2157ECu;
    {
        const bool branch_taken_0x2157ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2157F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157ECu;
        // 0x2157f0: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157ec) {
            ctx->pc = 0x215818u;
            goto label_215818;
        }
    }
    ctx->pc = 0x2157F4u;
    // 0x2157f4: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x2157f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2157f8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2157F8u;
    {
        const bool branch_taken_0x2157f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2157FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157F8u;
        // 0x2157fc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157f8) {
            ctx->pc = 0x215878u;
            goto label_215878;
        }
    }
    ctx->pc = 0x215800u;
    // 0x215800: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x215800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215804: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x215804u;
    {
        const bool branch_taken_0x215804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215804u;
        // 0x215808: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215804) {
            ctx->pc = 0x215830u;
            goto label_215830;
        }
    }
    ctx->pc = 0x21580Cu;
    // 0x21580c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x21580Cu;
    {
        const bool branch_taken_0x21580c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21580Cu;
        // 0x215810: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21580c) {
            ctx->pc = 0x215880u;
            goto label_215880;
        }
    }
    ctx->pc = 0x215814u;
    // 0x215814: 0x0  nop
    ctx->pc = 0x215814u;
    // NOP
label_215818:
    // 0x215818: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x215818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21581c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x21581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x215820: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x215820u;
    {
        const bool branch_taken_0x215820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215820u;
        // 0x215824: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215820) {
            ctx->pc = 0x215878u;
            goto label_215878;
        }
    }
    ctx->pc = 0x215828u;
    // 0x215828: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x215828u;
    {
        const bool branch_taken_0x215828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215828u;
        // 0x21582c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215828) {
            ctx->pc = 0x215844u;
            goto label_215844;
        }
    }
    ctx->pc = 0x215830u;
label_215830:
    // 0x215830: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x215830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215834: 0x30420048  andi        $v0, $v0, 0x48
    ctx->pc = 0x215834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)72);
    // 0x215838: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x215838u;
    {
        const bool branch_taken_0x215838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215838u;
        // 0x21583c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215838) {
            ctx->pc = 0x215878u;
            goto label_215878;
        }
    }
    ctx->pc = 0x215840u;
    // 0x215840: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x215840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_215844:
    // 0x215844: 0xc0856d8  jal         func_215B60
    ctx->pc = 0x215844u;
    SET_GPR_U32(ctx, 31, 0x21584Cu);
    ctx->pc = 0x215848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215844u;
    // 0x215848: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B60u, 0x215844u, 0x21584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21584Cu;
label_21584c:
    // 0x21584c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21584cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215850: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x215850u;
    {
        const bool branch_taken_0x215850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x215850) {
            ctx->pc = 0x215864u;
            goto label_215864;
        }
    }
    ctx->pc = 0x215858u;
    // 0x215858: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x215858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x21585c: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21585Cu;
    {
        const bool branch_taken_0x21585c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x215860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21585Cu;
        // 0x215860: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21585c) {
            ctx->pc = 0x215880u;
            goto label_215880;
        }
    }
    ctx->pc = 0x215864u;
label_215864:
    // 0x215864: 0xc0856b6  jal         func_215AD8
    ctx->pc = 0x215864u;
    SET_GPR_U32(ctx, 31, 0x21586Cu);
    ctx->pc = 0x215868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215864u;
    // 0x215868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215AD8u, 0x215864u, 0x21586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21586Cu;
label_21586c:
    // 0x21586c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21586Cu;
    {
        const bool branch_taken_0x21586c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21586Cu;
        // 0x215870: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21586c) {
            ctx->pc = 0x215894u;
            goto label_215894;
        }
    }
    ctx->pc = 0x215874u;
    // 0x215874: 0x0  nop
    ctx->pc = 0x215874u;
    // NOP
label_215878:
    // 0x215878: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x215878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x21587c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21587cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215880:
    // 0x215880: 0xc08569c  jal         func_215A70
    ctx->pc = 0x215880u;
    SET_GPR_U32(ctx, 31, 0x215888u);
    ctx->pc = 0x215884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215880u;
    // 0x215884: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A70u, 0x215880u, 0x215888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215888u;
label_215888:
    // 0x215888: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x215888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_21588c:
    // 0x21588c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21588cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215890:
    // 0x215890: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x215890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_215894:
    // 0x215894: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x215894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x215898: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x215898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21589c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x21589cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2158a0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2158a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2158a4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2158a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2158a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2158A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2158ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158A8u;
        // 0x2158ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2158A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2158B0u;
}
