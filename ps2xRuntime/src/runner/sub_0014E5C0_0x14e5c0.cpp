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

// Function: sub_0014E5C0
// Address: 0x14e5c0 - 0x14e734
void sub_0014E5C0_0x14e5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E5C0_0x14e5c0");
#endif

    switch (ctx->pc) {
        case 0x14e5e8u: goto label_14e5e8;
        case 0x14e62cu: goto label_14e62c;
        case 0x14e644u: goto label_14e644;
        case 0x14e670u: goto label_14e670;
        case 0x14e690u: goto label_14e690;
        case 0x14e6b8u: goto label_14e6b8;
        case 0x14e6fcu: goto label_14e6fc;
        default: break;
    }

    ctx->pc = 0x14e5c0u;

    // 0x14e5c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14e5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14e5c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14e5c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14e5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14e5cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14e5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14e5d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14e5d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e5d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14e5d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e5e0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x14E5E0u;
    {
        const bool branch_taken_0x14e5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5E0u;
        // 0x14e5e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5e0) {
            ctx->pc = 0x14E708u;
            goto label_14e708;
        }
    }
    ctx->pc = 0x14E5E8u;
label_14e5e8:
    // 0x14e5e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14e5ec: 0x12430004  beq         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E5ECu;
    {
        const bool branch_taken_0x14e5ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x14e5ec) {
            ctx->pc = 0x14E600u;
            goto label_14e600;
        }
    }
    ctx->pc = 0x14E5F4u;
    // 0x14e5f4: 0x16500042  bne         $s2, $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x14E5F4u;
    {
        const bool branch_taken_0x14e5f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x14e5f4) {
            ctx->pc = 0x14E700u;
            goto label_14e700;
        }
    }
    ctx->pc = 0x14E5FCu;
    // 0x14e5fc: 0x0  nop
    ctx->pc = 0x14e5fcu;
    // NOP
label_14e600:
    // 0x14e600: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x14e600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x14e604: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x14e604u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x14e608: 0x8e6300ec  lw          $v1, 0xEC($s3)
    ctx->pc = 0x14e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 236)));
    // 0x14e60c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x14e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14e610: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x14e610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e614: 0x96230018  lhu         $v1, 0x18($s1)
    ctx->pc = 0x14e614u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x14e618: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14E618u;
    {
        const bool branch_taken_0x14e618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E618u;
        // 0x14e61c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e618) {
            ctx->pc = 0x14E678u;
            goto label_14e678;
        }
    }
    ctx->pc = 0x14E620u;
    // 0x14e620: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x14e620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x14e624: 0xc0414ca  jal         func_105328
    ctx->pc = 0x14E624u;
    SET_GPR_U32(ctx, 31, 0x14E62Cu);
    ctx->pc = 0x14E628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E624u;
    // 0x14e628: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x14E624u, 0x14E62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E62Cu;
label_14e62c:
    // 0x14e62c: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x14e62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x14e630: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14e630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e634: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e638: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x14e638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14e63c: 0xc0538a4  jal         func_14E290
    ctx->pc = 0x14E63Cu;
    SET_GPR_U32(ctx, 31, 0x14E644u);
    ctx->pc = 0x14E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E63Cu;
    // 0x14e640: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E290u, 0x14E63Cu, 0x14E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E644u;
label_14e644:
    // 0x14e644: 0x96230018  lhu         $v1, 0x18($s1)
    ctx->pc = 0x14e644u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x14e648: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14e648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14e64c: 0xa6230018  sh          $v1, 0x18($s1)
    ctx->pc = 0x14e64cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x14e650: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14e650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14e654: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E654u;
    {
        const bool branch_taken_0x14e654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E654u;
        // 0x14e658: 0x27848560  addiu       $a0, $gp, -0x7AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e654) {
            ctx->pc = 0x14E678u;
            goto label_14e678;
        }
    }
    ctx->pc = 0x14E65Cu;
    // 0x14e65c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14e65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e660: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e664: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x14e664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x14e668: 0xc0538a4  jal         func_14E290
    ctx->pc = 0x14E668u;
    SET_GPR_U32(ctx, 31, 0x14E670u);
    ctx->pc = 0x14E66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E668u;
    // 0x14e66c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E290u, 0x14E668u, 0x14E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E670u;
label_14e670:
    // 0x14e670: 0xa220001c  sb          $zero, 0x1C($s1)
    ctx->pc = 0x14e670u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x14e674: 0x0  nop
    ctx->pc = 0x14e674u;
    // NOP
label_14e678:
    // 0x14e678: 0x9623001a  lhu         $v1, 0x1A($s1)
    ctx->pc = 0x14e678u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x14e67c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x14E67Cu;
    {
        const bool branch_taken_0x14e67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E67Cu;
        // 0x14e680: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e67c) {
            ctx->pc = 0x14E700u;
            goto label_14e700;
        }
    }
    ctx->pc = 0x14E684u;
    // 0x14e684: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x14e684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x14e688: 0xc0414ca  jal         func_105328
    ctx->pc = 0x14E688u;
    SET_GPR_U32(ctx, 31, 0x14E690u);
    ctx->pc = 0x14E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E688u;
    // 0x14e68c: 0x26260050  addiu       $a2, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x14E688u, 0x14E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E690u;
label_14e690:
    // 0x14e690: 0x262300c0  addiu       $v1, $s1, 0xC0
    ctx->pc = 0x14e690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x14e694: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x14e694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14e698: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14e698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e69c: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x14e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x14e6a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14e6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e6a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e6a8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x14e6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14e6ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14e6acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e6b0: 0xc0539d0  jal         func_14E740
    ctx->pc = 0x14E6B0u;
    SET_GPR_U32(ctx, 31, 0x14E6B8u);
    ctx->pc = 0x14E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E6B0u;
    // 0x14e6b4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E740u, 0x14E6B0u, 0x14E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6B8u;
label_14e6b8:
    // 0x14e6b8: 0x9623001a  lhu         $v1, 0x1A($s1)
    ctx->pc = 0x14e6b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x14e6bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14e6c0: 0xa623001a  sh          $v1, 0x1A($s1)
    ctx->pc = 0x14e6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x14e6c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14e6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14e6c8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x14E6C8u;
    {
        const bool branch_taken_0x14e6c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e6c8) {
            ctx->pc = 0x14E700u;
            goto label_14e700;
        }
    }
    ctx->pc = 0x14E6D0u;
    // 0x14e6d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14e6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e6d4: 0x262300c0  addiu       $v1, $s1, 0xC0
    ctx->pc = 0x14e6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x14e6d8: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x14e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x14e6dc: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x14e6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x14e6e0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14e6e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e6e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14e6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e6e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e6ec: 0x26270040  addiu       $a3, $s1, 0x40
    ctx->pc = 0x14e6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x14e6f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14e6f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e6f4: 0xc0539d0  jal         func_14E740
    ctx->pc = 0x14E6F4u;
    SET_GPR_U32(ctx, 31, 0x14E6FCu);
    ctx->pc = 0x14E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E6F4u;
    // 0x14e6f8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E740u, 0x14E6F4u, 0x14E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6FCu;
label_14e6fc:
    // 0x14e6fc: 0xa220001d  sb          $zero, 0x1D($s1)
    ctx->pc = 0x14e6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 0));
label_14e700:
    // 0x14e700: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14e700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14e704: 0x0  nop
    ctx->pc = 0x14e704u;
    // NOP
label_14e708:
    // 0x14e708: 0x926300e4  lbu         $v1, 0xE4($s3)
    ctx->pc = 0x14e708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x14e70c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x14e70cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14e710: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x14E710u;
    {
        const bool branch_taken_0x14e710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e710) {
            ctx->pc = 0x14E5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e5e8;
        }
    }
    ctx->pc = 0x14E718u;
    // 0x14e718: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14e718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e71c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14e71cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e720: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e72c: 0x3e00008  jr          $ra
    ctx->pc = 0x14E72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E72Cu;
        // 0x14e730: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E734u;
}
