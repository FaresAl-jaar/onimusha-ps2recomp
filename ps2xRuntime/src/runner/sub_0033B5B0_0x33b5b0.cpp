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

// Function: sub_0033B5B0
// Address: 0x33b5b0 - 0x33b814
void sub_0033B5B0_0x33b5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B5B0_0x33b5b0");
#endif

    switch (ctx->pc) {
        case 0x33b5ecu: goto label_33b5ec;
        case 0x33b608u: goto label_33b608;
        case 0x33b620u: goto label_33b620;
        case 0x33b698u: goto label_33b698;
        case 0x33b6d0u: goto label_33b6d0;
        case 0x33b6fcu: goto label_33b6fc;
        case 0x33b760u: goto label_33b760;
        case 0x33b788u: goto label_33b788;
        case 0x33b7b0u: goto label_33b7b0;
        case 0x33b7d8u: goto label_33b7d8;
        default: break;
    }

    ctx->pc = 0x33b5b0u;

    // 0x33b5b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x33b5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x33b5b4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x33b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x33b5b8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x33b5bc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x33b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x33b5c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33b5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x33b5c4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x33b5c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b5c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33b5cc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x33b5ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b5d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33b5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33b5d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x33b5d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b5d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33b5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33b5dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33b5e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33b5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33b5e4: 0xc0cecf8  jal         func_33B3E0
    ctx->pc = 0x33B5E4u;
    SET_GPR_U32(ctx, 31, 0x33B5ECu);
    ctx->pc = 0x33B5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B5E4u;
    // 0x33b5e8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B3E0u, 0x33B5E4u, 0x33B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B5ECu;
label_33b5ec:
    // 0x33b5ec: 0x92c30001  lbu         $v1, 0x1($s6)
    ctx->pc = 0x33b5ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x33b5f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33b5f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b5f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33b5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b5f8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x33B5F8u;
    {
        const bool branch_taken_0x33b5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5F8u;
        // 0x33b5fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b5f8) {
            ctx->pc = 0x33B658u;
            goto label_33b658;
        }
    }
    ctx->pc = 0x33B600u;
    // 0x33b600: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x33B600u;
    SET_GPR_U32(ctx, 31, 0x33B608u);
    ctx->pc = 0x33B604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B600u;
    // 0x33b604: 0x96c40002  lhu         $a0, 0x2($s6) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x33B600u, 0x33B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B608u;
label_33b608:
    // 0x33b608: 0x96c50002  lhu         $a1, 0x2($s6)
    ctx->pc = 0x33b608u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x33b60c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x33b610: 0x92c60009  lbu         $a2, 0x9($s6)
    ctx->pc = 0x33b610u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 9)));
    // 0x33b614: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33b614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b618: 0xc0bd184  jal         func_2F4610
    ctx->pc = 0x33B618u;
    SET_GPR_U32(ctx, 31, 0x33B620u);
    ctx->pc = 0x33B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B618u;
    // 0x33b61c: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4610u, 0x33B618u, 0x33B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B620u;
label_33b620:
    // 0x33b620: 0x96c40002  lhu         $a0, 0x2($s6)
    ctx->pc = 0x33b620u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x33b624: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33b624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33b628: 0x92260010  lbu         $a2, 0x10($s1)
    ctx->pc = 0x33b628u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33b62c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x33b62cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b630: 0x92250012  lbu         $a1, 0x12($s1)
    ctx->pc = 0x33b630u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x33b634: 0x30840f00  andi        $a0, $a0, 0xF00
    ctx->pc = 0x33b634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
    // 0x33b638: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x33b638u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x33b63c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B63Cu;
    {
        const bool branch_taken_0x33b63c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x33B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B63Cu;
        // 0x33b640: 0x24c60064  addiu       $a2, $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b63c) {
            ctx->pc = 0x33B650u;
            goto label_33b650;
        }
    }
    ctx->pc = 0x33B644u;
    // 0x33b644: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33B644u;
    {
        const bool branch_taken_0x33b644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B644u;
        // 0x33b648: 0x24a50078  addiu       $a1, $a1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b644) {
            ctx->pc = 0x33B658u;
            goto label_33b658;
        }
    }
    ctx->pc = 0x33B64Cu;
    // 0x33b64c: 0x0  nop
    ctx->pc = 0x33b64cu;
    // NOP
label_33b650:
    // 0x33b650: 0x24a5006e  addiu       $a1, $a1, 0x6E
    ctx->pc = 0x33b650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 110));
    // 0x33b654: 0x0  nop
    ctx->pc = 0x33b654u;
    // NOP
label_33b658:
    // 0x33b658: 0x92c40000  lbu         $a0, 0x0($s6)
    ctx->pc = 0x33b658u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33b65c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x33b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x33b660: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B660u;
    {
        const bool branch_taken_0x33b660 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x33B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B660u;
        // 0x33b664: 0x3c120065  lui         $s2, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b660) {
            ctx->pc = 0x33B674u;
            goto label_33b674;
        }
    }
    ctx->pc = 0x33B668u;
    // 0x33b668: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x33b668u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
    // 0x33b66c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33B66Cu;
    {
        const bool branch_taken_0x33b66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B66Cu;
        // 0x33b670: 0x265274a0  addiu       $s2, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b66c) {
            ctx->pc = 0x33B678u;
            goto label_33b678;
        }
    }
    ctx->pc = 0x33B674u;
label_33b674:
    // 0x33b674: 0x26527470  addiu       $s2, $s2, 0x7470
    ctx->pc = 0x33b674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_33b678:
    // 0x33b678: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x33b678u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x33b67c: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x33B67Cu;
    {
        const bool branch_taken_0x33b67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B67Cu;
        // 0x33b680: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b67c) {
            ctx->pc = 0x33B7E8u;
            goto label_33b7e8;
        }
    }
    ctx->pc = 0x33B684u;
    // 0x33b684: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b688: 0x728821  addu        $s1, $v1, $s2
    ctx->pc = 0x33b688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x33b68c: 0xc28025  or          $s0, $a2, $v0
    ctx->pc = 0x33b68cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x33b690: 0xa2b825  or          $s7, $a1, $v0
    ctx->pc = 0x33b690u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x33b694: 0x0  nop
    ctx->pc = 0x33b694u;
    // NOP
label_33b698:
    // 0x33b698: 0x96460004  lhu         $a2, 0x4($s2)
    ctx->pc = 0x33b698u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x33b69c: 0x96430006  lhu         $v1, 0x6($s2)
    ctx->pc = 0x33b69cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x33b6a0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b6a4: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x33b6a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33b6a8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33b6ac: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33b6acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x33b6b0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33b6b4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x33b6b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b6b8: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x33b6b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x33b6bc: 0x2529ef60  addiu       $t1, $t1, -0x10A0
    ctx->pc = 0x33b6bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963040));
    // 0x33b6c0: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x33b6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x33b6c4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x33b6c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33b6c8: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x33B6C8u;
    SET_GPR_U32(ctx, 31, 0x33B6D0u);
    ctx->pc = 0x33B6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B6C8u;
    // 0x33b6cc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x33B6C8u, 0x33B6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B6D0u;
label_33b6d0:
    // 0x33b6d0: 0x92c30001  lbu         $v1, 0x1($s6)
    ctx->pc = 0x33b6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x33b6d4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x33B6D4u;
    {
        const bool branch_taken_0x33b6d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B6D4u;
        // 0x33b6d8: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b6d4) {
            ctx->pc = 0x33B708u;
            goto label_33b708;
        }
    }
    ctx->pc = 0x33B6DCu;
    // 0x33b6dc: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x33b6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x33b6e0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b6e4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33b6e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33b6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b6ec: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x33b6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33b6f0: 0x24e7ef60  addiu       $a3, $a3, -0x10A0
    ctx->pc = 0x33b6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963040));
    // 0x33b6f4: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x33B6F4u;
    SET_GPR_U32(ctx, 31, 0x33B6FCu);
    ctx->pc = 0x33B6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B6F4u;
    // 0x33b6f8: 0x34480050  ori         $t0, $v0, 0x50 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x33B6F4u, 0x33B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B6FCu;
label_33b6fc:
    // 0x33b6fc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x33B6FCu;
    {
        const bool branch_taken_0x33b6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b6fc) {
            ctx->pc = 0x33B7D8u;
            goto label_33b7d8;
        }
    }
    ctx->pc = 0x33B704u;
    // 0x33b704: 0x0  nop
    ctx->pc = 0x33b704u;
    // NOP
label_33b708:
    // 0x33b708: 0x96440006  lhu         $a0, 0x6($s2)
    ctx->pc = 0x33b708u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x33b70c: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x33b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x33b710: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x33B710u;
    {
        const bool branch_taken_0x33b710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B710u;
        // 0x33b714: 0x24030053  addiu       $v1, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b710) {
            ctx->pc = 0x33B7B8u;
            goto label_33b7b8;
        }
    }
    ctx->pc = 0x33B718u;
    // 0x33b718: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x33B718u;
    {
        const bool branch_taken_0x33b718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33b718) {
            ctx->pc = 0x33B790u;
            goto label_33b790;
        }
    }
    ctx->pc = 0x33B720u;
    // 0x33b720: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x33b720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x33b724: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x33B724u;
    {
        const bool branch_taken_0x33b724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B724u;
        // 0x33b728: 0x24030052  addiu       $v1, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b724) {
            ctx->pc = 0x33B768u;
            goto label_33b768;
        }
    }
    ctx->pc = 0x33B72Cu;
    // 0x33b72c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B72Cu;
    {
        const bool branch_taken_0x33b72c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33b72c) {
            ctx->pc = 0x33B740u;
            goto label_33b740;
        }
    }
    ctx->pc = 0x33B734u;
    // 0x33b734: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x33B734u;
    {
        const bool branch_taken_0x33b734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b734) {
            ctx->pc = 0x33B7D8u;
            goto label_33b7d8;
        }
    }
    ctx->pc = 0x33B73Cu;
    // 0x33b73c: 0x0  nop
    ctx->pc = 0x33b73cu;
    // NOP
label_33b740:
    // 0x33b740: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x33b740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x33b744: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x33b744u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33b748: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x33b748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b74c: 0x92c80009  lbu         $t0, 0x9($s6)
    ctx->pc = 0x33b74cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 9)));
    // 0x33b750: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x33b750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33b754: 0x96c90002  lhu         $t1, 0x2($s6)
    ctx->pc = 0x33b754u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x33b758: 0xc0ed74c  jal         func_3B5D30
    ctx->pc = 0x33B758u;
    SET_GPR_U32(ctx, 31, 0x33B760u);
    ctx->pc = 0x33B75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B758u;
    // 0x33b75c: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5D30u, 0x33B758u, 0x33B760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B760u;
label_33b760:
    // 0x33b760: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x33B760u;
    {
        const bool branch_taken_0x33b760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b760) {
            ctx->pc = 0x33B7D8u;
            goto label_33b7d8;
        }
    }
    ctx->pc = 0x33B768u;
label_33b768:
    // 0x33b768: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33b768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33b76c: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x33b76cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x33b770: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33b770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33b774: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33b774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b778: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x33b778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33b77c: 0x24e7ef68  addiu       $a3, $a3, -0x1098
    ctx->pc = 0x33b77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963048));
    // 0x33b780: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x33B780u;
    SET_GPR_U32(ctx, 31, 0x33B788u);
    ctx->pc = 0x33B784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B780u;
    // 0x33b784: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x33B780u, 0x33B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B788u;
label_33b788:
    // 0x33b788: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33B788u;
    {
        const bool branch_taken_0x33b788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b788) {
            ctx->pc = 0x33B7D8u;
            goto label_33b7d8;
        }
    }
    ctx->pc = 0x33B790u;
label_33b790:
    // 0x33b790: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33b790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33b794: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x33b794u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x33b798: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33b798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33b79c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33b79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b7a0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x33b7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33b7a4: 0x24e7ef60  addiu       $a3, $a3, -0x10A0
    ctx->pc = 0x33b7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963040));
    // 0x33b7a8: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x33B7A8u;
    SET_GPR_U32(ctx, 31, 0x33B7B0u);
    ctx->pc = 0x33B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B7A8u;
    // 0x33b7ac: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x33B7A8u, 0x33B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B7B0u;
label_33b7b0:
    // 0x33b7b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33B7B0u;
    {
        const bool branch_taken_0x33b7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b7b0) {
            ctx->pc = 0x33B7D8u;
            goto label_33b7d8;
        }
    }
    ctx->pc = 0x33B7B8u;
label_33b7b8:
    // 0x33b7b8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33b7bc: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x33b7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x33b7c0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33b7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33b7c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33b7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b7c8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x33b7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33b7cc: 0x24e7ef60  addiu       $a3, $a3, -0x10A0
    ctx->pc = 0x33b7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963040));
    // 0x33b7d0: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x33B7D0u;
    SET_GPR_U32(ctx, 31, 0x33B7D8u);
    ctx->pc = 0x33B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B7D0u;
    // 0x33b7d4: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x33B7D0u, 0x33B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B7D8u;
label_33b7d8:
    // 0x33b7d8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x33b7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x33b7dc: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x33b7dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x33b7e0: 0x1460ffad  bnez        $v1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x33B7E0u;
    {
        const bool branch_taken_0x33b7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7E0u;
        // 0x33b7e4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b7e0) {
            ctx->pc = 0x33B698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b698;
        }
    }
    ctx->pc = 0x33B7E8u;
label_33b7e8:
    // 0x33b7e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x33b7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33b7ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x33b7ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33b7f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33b7f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33b7f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33b7f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33b7f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33b7f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33b7fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33b7fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33b800: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33b800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33b808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b80c: 0x3e00008  jr          $ra
    ctx->pc = 0x33B80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B80Cu;
        // 0x33b810: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B814u;
}
