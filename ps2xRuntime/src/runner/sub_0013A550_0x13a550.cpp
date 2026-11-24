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

// Function: sub_0013A550
// Address: 0x13a550 - 0x13aabc
void sub_0013A550_0x13a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A550_0x13a550");
#endif

    switch (ctx->pc) {
        case 0x13a5ecu: goto label_13a5ec;
        case 0x13a608u: goto label_13a608;
        case 0x13a648u: goto label_13a648;
        case 0x13a660u: goto label_13a660;
        case 0x13a6e0u: goto label_13a6e0;
        case 0x13a734u: goto label_13a734;
        case 0x13a7a8u: goto label_13a7a8;
        case 0x13a7dcu: goto label_13a7dc;
        case 0x13a850u: goto label_13a850;
        case 0x13a868u: goto label_13a868;
        case 0x13a938u: goto label_13a938;
        case 0x13a950u: goto label_13a950;
        case 0x13a9d0u: goto label_13a9d0;
        default: break;
    }

    ctx->pc = 0x13a550u;

    // 0x13a550: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13a550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13a554: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13a554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x13a558: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13a558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13a55c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x13a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x13a560: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x13a560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x13a564: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x13a564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x13a568: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x13a568u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a56c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x13a56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x13a570: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x13a570u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a574: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x13a574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x13a578: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x13a578u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a57c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13a57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x13a580: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13a580u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a584: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13a584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13a588: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13a588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13a58c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13a58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13a590: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x13a590u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13a594: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13a594u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13a598: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x13a598u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x13a59c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13a59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13a5a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A5A0u;
    {
        const bool branch_taken_0x13a5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5A0u;
        // 0x13a5a4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a5a0) {
            ctx->pc = 0x13A5B0u;
            goto label_13a5b0;
        }
    }
    ctx->pc = 0x13A5A8u;
    // 0x13a5a8: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x13A5A8u;
    {
        const bool branch_taken_0x13a5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5A8u;
        // 0x13a5ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a5a8) {
            ctx->pc = 0x13AA88u;
            goto label_13aa88;
        }
    }
    ctx->pc = 0x13A5B0u;
label_13a5b0:
    // 0x13a5b0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x13a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x13a5b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13a5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13a5b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A5B8u;
    {
        const bool branch_taken_0x13a5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a5b8) {
            ctx->pc = 0x13A5C8u;
            goto label_13a5c8;
        }
    }
    ctx->pc = 0x13A5C0u;
    // 0x13a5c0: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x13A5C0u;
    {
        const bool branch_taken_0x13a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5C0u;
        // 0x13a5c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a5c0) {
            ctx->pc = 0x13AA88u;
            goto label_13aa88;
        }
    }
    ctx->pc = 0x13A5C8u;
label_13a5c8:
    // 0x13a5c8: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x13a5c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x13a5cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A5CCu;
    {
        const bool branch_taken_0x13a5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a5cc) {
            ctx->pc = 0x13A5E0u;
            goto label_13a5e0;
        }
    }
    ctx->pc = 0x13A5D4u;
    // 0x13a5d4: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x13A5D4u;
    {
        const bool branch_taken_0x13a5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5D4u;
        // 0x13a5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a5d4) {
            ctx->pc = 0x13AA88u;
            goto label_13aa88;
        }
    }
    ctx->pc = 0x13A5DCu;
    // 0x13a5dc: 0x0  nop
    ctx->pc = 0x13a5dcu;
    // NOP
label_13a5e0:
    // 0x13a5e0: 0x26850f60  addiu       $a1, $s4, 0xF60
    ctx->pc = 0x13a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3936));
    // 0x13a5e4: 0xc04ecd0  jal         func_13B340
    ctx->pc = 0x13A5E4u;
    SET_GPR_U32(ctx, 31, 0x13A5ECu);
    ctx->pc = 0x13A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A5E4u;
    // 0x13a5e8: 0x26860f70  addiu       $a2, $s4, 0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 3952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B340u, 0x13A5E4u, 0x13A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A5ECu;
label_13a5ec:
    // 0x13a5ec: 0xff828538  sd          $v0, -0x7AC8($gp)
    ctx->pc = 0x13a5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935864), GPR_U64(ctx, 2));
    // 0x13a5f0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13a5f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13a5f4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x13a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x13a5f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13a5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13a5fc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x13a5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13a600: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x13A600u;
    {
        const bool branch_taken_0x13a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A600u;
        // 0x13a604: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a600) {
            ctx->pc = 0x13A910u;
            goto label_13a910;
        }
    }
    ctx->pc = 0x13A608u;
label_13a608:
    // 0x13a608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a60c: 0x2421814  dsllv       $v1, $v0, $s2
    ctx->pc = 0x13a60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x13a610: 0xdf828538  ld          $v0, -0x7AC8($gp)
    ctx->pc = 0x13a610u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935864)));
    // 0x13a614: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13a614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13a618: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x13A618u;
    {
        const bool branch_taken_0x13a618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a618) {
            ctx->pc = 0x13A908u;
            goto label_13a908;
        }
    }
    ctx->pc = 0x13A620u;
    // 0x13a620: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x13a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13a624: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13a624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13a628: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x13A628u;
    {
        const bool branch_taken_0x13a628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a628) {
            ctx->pc = 0x13A6A8u;
            goto label_13a6a8;
        }
    }
    ctx->pc = 0x13A630u;
    // 0x13a630: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13a630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13a634: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a638: 0x8c500ad0  lw          $s0, 0xAD0($v0)
    ctx->pc = 0x13a638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2768)));
    // 0x13a63c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13A63Cu;
    {
        const bool branch_taken_0x13a63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A63Cu;
        // 0x13a640: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a63c) {
            ctx->pc = 0x13A690u;
            goto label_13a690;
        }
    }
    ctx->pc = 0x13A644u;
    // 0x13a644: 0x0  nop
    ctx->pc = 0x13a644u;
    // NOP
label_13a648:
    // 0x13a648: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13a648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a64c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x13a64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13a650: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x13a650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13a654: 0x26870f60  addiu       $a3, $s4, 0xF60
    ctx->pc = 0x13a654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 3936));
    // 0x13a658: 0xc04e6a8  jal         func_139AA0
    ctx->pc = 0x13A658u;
    SET_GPR_U32(ctx, 31, 0x13A660u);
    ctx->pc = 0x13A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A658u;
    // 0x13a65c: 0x26880f70  addiu       $t0, $s4, 0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 3952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139AA0u, 0x13A658u, 0x13A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A660u;
label_13a660:
    // 0x13a660: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13a660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13a664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a668: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13A668u;
    {
        const bool branch_taken_0x13a668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a668) {
            ctx->pc = 0x13A688u;
            goto label_13a688;
        }
    }
    ctx->pc = 0x13A670u;
    // 0x13a670: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x13a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13a674: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13a674u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a67c: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x13A67Cu;
    {
        const bool branch_taken_0x13a67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A67Cu;
        // 0x13a680: 0x7ee30000  sq          $v1, 0x0($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a67c) {
            ctx->pc = 0x13AA88u;
            goto label_13aa88;
        }
    }
    ctx->pc = 0x13A684u;
    // 0x13a684: 0x0  nop
    ctx->pc = 0x13a684u;
    // NOP
label_13a688:
    // 0x13a688: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13a688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13a68c: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x13a68cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_13a690:
    // 0x13a690: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x13a690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x13a694: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a698: 0x9442085c  lhu         $v0, 0x85C($v0)
    ctx->pc = 0x13a698u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2140)));
    // 0x13a69c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x13a69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13a6a0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x13A6A0u;
    {
        const bool branch_taken_0x13a6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a6a0) {
            ctx->pc = 0x13A648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a648;
        }
    }
    ctx->pc = 0x13A6A8u;
label_13a6a8:
    // 0x13a6a8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x13a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13a6ac: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x13a6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x13a6b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13A6B0u;
    {
        const bool branch_taken_0x13a6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a6b0) {
            ctx->pc = 0x13A6C8u;
            goto label_13a6c8;
        }
    }
    ctx->pc = 0x13A6B8u;
    // 0x13a6b8: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x13a6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x13a6bc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x13A6BCu;
    {
        const bool branch_taken_0x13a6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a6bc) {
            ctx->pc = 0x13A780u;
            goto label_13a780;
        }
    }
    ctx->pc = 0x13A6C4u;
    // 0x13a6c4: 0x0  nop
    ctx->pc = 0x13a6c4u;
    // NOP
label_13a6c8:
    // 0x13a6c8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13a6cc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a6d0: 0x8c500bd0  lw          $s0, 0xBD0($v0)
    ctx->pc = 0x13a6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3024)));
    // 0x13a6d4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x13A6D4u;
    {
        const bool branch_taken_0x13a6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6D4u;
        // 0x13a6d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a6d4) {
            ctx->pc = 0x13A768u;
            goto label_13a768;
        }
    }
    ctx->pc = 0x13A6DCu;
    // 0x13a6dc: 0x0  nop
    ctx->pc = 0x13a6dcu;
    // NOP
label_13a6e0:
    // 0x13a6e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13a6e4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x13a6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x13a6e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13A6E8u;
    {
        const bool branch_taken_0x13a6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a6e8) {
            ctx->pc = 0x13A708u;
            goto label_13a708;
        }
    }
    ctx->pc = 0x13A6F0u;
    // 0x13a6f0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13A6F0u;
    {
        const bool branch_taken_0x13a6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a6f0) {
            ctx->pc = 0x13A760u;
            goto label_13a760;
        }
    }
    ctx->pc = 0x13A6F8u;
    // 0x13a6f8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x13a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13a6fc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x13a6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x13a700: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13A700u;
    {
        const bool branch_taken_0x13a700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a700) {
            ctx->pc = 0x13A760u;
            goto label_13a760;
        }
    }
    ctx->pc = 0x13A708u;
label_13a708:
    // 0x13a708: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13a708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13a70c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x13a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13a710: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13a710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13a714: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13A714u;
    {
        const bool branch_taken_0x13a714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a714) {
            ctx->pc = 0x13A760u;
            goto label_13a760;
        }
    }
    ctx->pc = 0x13A71Cu;
    // 0x13a71c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13a71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a720: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x13a720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13a724: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x13a724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13a728: 0x26870f60  addiu       $a3, $s4, 0xF60
    ctx->pc = 0x13a728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 3936));
    // 0x13a72c: 0xc04e6a8  jal         func_139AA0
    ctx->pc = 0x13A72Cu;
    SET_GPR_U32(ctx, 31, 0x13A734u);
    ctx->pc = 0x13A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A72Cu;
    // 0x13a730: 0x26880f70  addiu       $t0, $s4, 0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 3952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139AA0u, 0x13A72Cu, 0x13A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A734u;
label_13a734:
    // 0x13a734: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13a734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13a738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a73c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A73Cu;
    {
        const bool branch_taken_0x13a73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a73c) {
            ctx->pc = 0x13A760u;
            goto label_13a760;
        }
    }
    ctx->pc = 0x13A744u;
    // 0x13a744: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x13a744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13a748: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13a748u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a74c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13a74cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a754: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x13A754u;
    {
        const bool branch_taken_0x13a754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A754u;
        // 0x13a758: 0x7ee30000  sq          $v1, 0x0($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a754) {
            ctx->pc = 0x13AA88u;
            goto label_13aa88;
        }
    }
    ctx->pc = 0x13A75Cu;
    // 0x13a75c: 0x0  nop
    ctx->pc = 0x13a75cu;
    // NOP
label_13a760:
    // 0x13a760: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13a760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13a764: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x13a764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_13a768:
    // 0x13a768: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x13a768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x13a76c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a770: 0x944208dc  lhu         $v0, 0x8DC($v0)
    ctx->pc = 0x13a770u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2268)));
    // 0x13a774: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x13a774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13a778: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x13A778u;
    {
        const bool branch_taken_0x13a778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a778) {
            ctx->pc = 0x13A6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a6e0;
        }
    }
    ctx->pc = 0x13A780u;
label_13a780:
    // 0x13a780: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x13a780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13a784: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x13a784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x13a788: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x13A788u;
    {
        const bool branch_taken_0x13a788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a788) {
            ctx->pc = 0x13A828u;
            goto label_13a828;
        }
    }
    ctx->pc = 0x13A790u;
    // 0x13a790: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13a790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13a794: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a798: 0x8c500bd0  lw          $s0, 0xBD0($v0)
    ctx->pc = 0x13a798u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3024)));
    // 0x13a79c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x13A79Cu;
    {
        const bool branch_taken_0x13a79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A79Cu;
        // 0x13a7a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a79c) {
            ctx->pc = 0x13A810u;
            goto label_13a810;
        }
    }
    ctx->pc = 0x13A7A4u;
    // 0x13a7a4: 0x0  nop
    ctx->pc = 0x13a7a4u;
    // NOP
label_13a7a8:
    // 0x13a7a8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13a7ac: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x13a7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x13a7b0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13A7B0u;
    {
        const bool branch_taken_0x13a7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a7b0) {
            ctx->pc = 0x13A808u;
            goto label_13a808;
        }
    }
    ctx->pc = 0x13A7B8u;
    // 0x13a7b8: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x13a7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x13a7bc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13A7BCu;
    {
        const bool branch_taken_0x13a7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a7bc) {
            ctx->pc = 0x13A808u;
            goto label_13a808;
        }
    }
    ctx->pc = 0x13A7C4u;
    // 0x13a7c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13a7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a7c8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x13a7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13a7cc: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x13a7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13a7d0: 0x26870f60  addiu       $a3, $s4, 0xF60
    ctx->pc = 0x13a7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 3936));
    // 0x13a7d4: 0xc04e6a8  jal         func_139AA0
    ctx->pc = 0x13A7D4u;
    SET_GPR_U32(ctx, 31, 0x13A7DCu);
    ctx->pc = 0x13A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A7D4u;
    // 0x13a7d8: 0x26880f70  addiu       $t0, $s4, 0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 3952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139AA0u, 0x13A7D4u, 0x13A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A7DCu;
label_13a7dc:
    // 0x13a7dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13a7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13a7e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a7e4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A7E4u;
    {
        const bool branch_taken_0x13a7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a7e4) {
            ctx->pc = 0x13A808u;
            goto label_13a808;
        }
    }
    ctx->pc = 0x13A7ECu;
    // 0x13a7ec: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x13a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13a7f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13a7f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a7f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13a7f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a7f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a7fc: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x13A7FCu;
    {
        const bool branch_taken_0x13a7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7FCu;
        // 0x13a800: 0x7ee30000  sq          $v1, 0x0($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a7fc) {
            ctx->pc = 0x13AA88u;
            goto label_13aa88;
        }
    }
    ctx->pc = 0x13A804u;
    // 0x13a804: 0x0  nop
    ctx->pc = 0x13a804u;
    // NOP
label_13a808:
    // 0x13a808: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13a808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13a80c: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x13a80cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_13a810:
    // 0x13a810: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x13a810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x13a814: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a818: 0x944208dc  lhu         $v0, 0x8DC($v0)
    ctx->pc = 0x13a818u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2268)));
    // 0x13a81c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x13a81cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13a820: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x13A820u;
    {
        const bool branch_taken_0x13a820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a820) {
            ctx->pc = 0x13A7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a7a8;
        }
    }
    ctx->pc = 0x13A828u;
label_13a828:
    // 0x13a828: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x13a828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13a82c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x13a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x13a830: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13a830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13a834: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x13A834u;
    {
        const bool branch_taken_0x13a834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a834) {
            ctx->pc = 0x13A908u;
            goto label_13a908;
        }
    }
    ctx->pc = 0x13A83Cu;
    // 0x13a83c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13a840: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a844: 0x8c500cd0  lw          $s0, 0xCD0($v0)
    ctx->pc = 0x13a844u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
    // 0x13a848: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x13A848u;
    {
        const bool branch_taken_0x13a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A848u;
        // 0x13a84c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a848) {
            ctx->pc = 0x13A8F0u;
            goto label_13a8f0;
        }
    }
    ctx->pc = 0x13A850u;
label_13a850:
    // 0x13a850: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13a850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a854: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x13a854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13a858: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x13a858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13a85c: 0x26870f60  addiu       $a3, $s4, 0xF60
    ctx->pc = 0x13a85cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 3936));
    // 0x13a860: 0xc04e6a8  jal         func_139AA0
    ctx->pc = 0x13A860u;
    SET_GPR_U32(ctx, 31, 0x13A868u);
    ctx->pc = 0x13A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A860u;
    // 0x13a864: 0x26880f70  addiu       $t0, $s4, 0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 3952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139AA0u, 0x13A860u, 0x13A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A868u;
label_13a868:
    // 0x13a868: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13a868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13a86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a870: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13A870u;
    {
        const bool branch_taken_0x13a870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a870) {
            ctx->pc = 0x13A8E8u;
            goto label_13a8e8;
        }
    }
    ctx->pc = 0x13A878u;
    // 0x13a878: 0xc6a50004  lwc1        $f5, 0x4($s5)
    ctx->pc = 0x13a878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13a87c: 0xc6840f64  lwc1        $f4, 0xF64($s4)
    ctx->pc = 0x13a87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13a880: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x13a880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13a884: 0xc6820f60  lwc1        $f2, 0xF60($s4)
    ctx->pc = 0x13a884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13a888: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x13a888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a88c: 0xc6800f68  lwc1        $f0, 0xF68($s4)
    ctx->pc = 0x13a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a890: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x13a890u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x13a894: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x13a894u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x13a898: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x13a898u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x13a89c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x13a89cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x13a8a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a8a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13a8a4: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x13a8a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[4]));
    // 0x13a8a8: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x13a8a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x13a8ac: 0x46000544  c1          0x544
    ctx->pc = 0x13a8acu;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x13a8b0: 0x0  nop
    ctx->pc = 0x13a8b0u;
    // NOP
    // 0x13a8b4: 0x0  nop
    ctx->pc = 0x13a8b4u;
    // NOP
    // 0x13a8b8: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x13a8b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a8bc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x13A8BCu;
    {
        const bool branch_taken_0x13a8bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a8bc) {
            ctx->pc = 0x13A8E8u;
            goto label_13a8e8;
        }
    }
    ctx->pc = 0x13A8C4u;
    // 0x13a8c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13a8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a8c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a8cc: 0x7aa40000  lq          $a0, 0x0($s5)
    ctx->pc = 0x13a8ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13a8d0: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x13a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13a8d4: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x13a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13a8d8: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x13a8d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x13a8dc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x13a8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x13a8e0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13a8e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a8e4: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x13a8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
label_13a8e8:
    // 0x13a8e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13a8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13a8ec: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x13a8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_13a8f0:
    // 0x13a8f0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x13a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x13a8f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a8f8: 0x9442095c  lhu         $v0, 0x95C($v0)
    ctx->pc = 0x13a8f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2396)));
    // 0x13a8fc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x13a8fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13a900: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x13A900u;
    {
        const bool branch_taken_0x13a900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a900) {
            ctx->pc = 0x13A850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a850;
        }
    }
    ctx->pc = 0x13A908u;
label_13a908:
    // 0x13a908: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13a908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13a90c: 0x0  nop
    ctx->pc = 0x13a90cu;
    // NOP
label_13a910:
    // 0x13a910: 0x2a420040  slti        $v0, $s2, 0x40
    ctx->pc = 0x13a910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x13a914: 0x1440ff3c  bnez        $v0, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x13A914u;
    {
        const bool branch_taken_0x13a914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a914) {
            ctx->pc = 0x13A608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a608;
        }
    }
    ctx->pc = 0x13A91Cu;
    // 0x13a91c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x13a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13a920: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13a920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13a924: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13a924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13a928: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x13A928u;
    {
        const bool branch_taken_0x13a928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a928) {
            ctx->pc = 0x13AA30u;
            goto label_13aa30;
        }
    }
    ctx->pc = 0x13A930u;
    // 0x13a930: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x13A930u;
    {
        const bool branch_taken_0x13a930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A930u;
        // 0x13a934: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a930) {
            ctx->pc = 0x13AA20u;
            goto label_13aa20;
        }
    }
    ctx->pc = 0x13A938u;
label_13a938:
    // 0x13a938: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13a938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13a93c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a940: 0x8c500ed0  lw          $s0, 0xED0($v0)
    ctx->pc = 0x13a940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x13a944: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x13A944u;
    {
        const bool branch_taken_0x13a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A944u;
        // 0x13a948: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a944) {
            ctx->pc = 0x13AA00u;
            goto label_13aa00;
        }
    }
    ctx->pc = 0x13A94Cu;
    // 0x13a94c: 0x0  nop
    ctx->pc = 0x13a94cu;
    // NOP
label_13a950:
    // 0x13a950: 0xdf838538  ld          $v1, -0x7AC8($gp)
    ctx->pc = 0x13a950u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935864)));
    // 0x13a954: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x13a954u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a958: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13a958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13a95c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x13A95Cu;
    {
        const bool branch_taken_0x13a95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a95c) {
            ctx->pc = 0x13A9F8u;
            goto label_13a9f8;
        }
    }
    ctx->pc = 0x13A964u;
    // 0x13a964: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13a964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13a968: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13a968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13a96c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13a96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13a970: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x13A970u;
    {
        const bool branch_taken_0x13a970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a970) {
            ctx->pc = 0x13A9F8u;
            goto label_13a9f8;
        }
    }
    ctx->pc = 0x13A978u;
    // 0x13a978: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x13a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13a97c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13a97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13a980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13A980u;
    {
        const bool branch_taken_0x13a980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a980) {
            ctx->pc = 0x13A998u;
            goto label_13a998;
        }
    }
    ctx->pc = 0x13A988u;
    // 0x13a988: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x13a988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13a98c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13A98Cu;
    {
        const bool branch_taken_0x13a98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a98c) {
            ctx->pc = 0x13A9B8u;
            goto label_13a9b8;
        }
    }
    ctx->pc = 0x13A994u;
    // 0x13a994: 0x0  nop
    ctx->pc = 0x13a994u;
    // NOP
label_13a998:
    // 0x13a998: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x13a998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13a99c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13a99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13a9a0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13A9A0u;
    {
        const bool branch_taken_0x13a9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a9a0) {
            ctx->pc = 0x13A9F8u;
            goto label_13a9f8;
        }
    }
    ctx->pc = 0x13A9A8u;
    // 0x13a9a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13a9ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13a9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13a9b0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13A9B0u;
    {
        const bool branch_taken_0x13a9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a9b0) {
            ctx->pc = 0x13A9F8u;
            goto label_13a9f8;
        }
    }
    ctx->pc = 0x13A9B8u;
label_13a9b8:
    // 0x13a9b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13a9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a9bc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x13a9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13a9c0: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x13a9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13a9c4: 0x26870f60  addiu       $a3, $s4, 0xF60
    ctx->pc = 0x13a9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 3936));
    // 0x13a9c8: 0xc04e6a8  jal         func_139AA0
    ctx->pc = 0x13A9C8u;
    SET_GPR_U32(ctx, 31, 0x13A9D0u);
    ctx->pc = 0x13A9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A9C8u;
    // 0x13a9cc: 0x26880f70  addiu       $t0, $s4, 0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 3952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139AA0u, 0x13A9C8u, 0x13A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A9D0u;
label_13a9d0:
    // 0x13a9d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13a9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13a9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a9d8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13A9D8u;
    {
        const bool branch_taken_0x13a9d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a9d8) {
            ctx->pc = 0x13A9F8u;
            goto label_13a9f8;
        }
    }
    ctx->pc = 0x13A9E0u;
    // 0x13a9e0: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x13a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13a9e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13a9e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a9e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13a9e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a9f0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x13A9F0u;
    {
        const bool branch_taken_0x13a9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9F0u;
        // 0x13a9f4: 0x7ee30000  sq          $v1, 0x0($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9f0) {
            ctx->pc = 0x13AA88u;
            goto label_13aa88;
        }
    }
    ctx->pc = 0x13A9F8u;
label_13a9f8:
    // 0x13a9f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13a9f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13a9fc: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x13a9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_13aa00:
    // 0x13aa00: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13aa04: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13aa08: 0x8c420a5c  lw          $v0, 0xA5C($v0)
    ctx->pc = 0x13aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2652)));
    // 0x13aa0c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x13aa0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13aa10: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x13AA10u;
    {
        const bool branch_taken_0x13aa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13aa10) {
            ctx->pc = 0x13A950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a950;
        }
    }
    ctx->pc = 0x13AA18u;
    // 0x13aa18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13aa18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13aa1c: 0x0  nop
    ctx->pc = 0x13aa1cu;
    // NOP
label_13aa20:
    // 0x13aa20: 0x2a420018  slti        $v0, $s2, 0x18
    ctx->pc = 0x13aa20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x13aa24: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x13AA24u;
    {
        const bool branch_taken_0x13aa24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13aa24) {
            ctx->pc = 0x13A938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a938;
        }
    }
    ctx->pc = 0x13AA2Cu;
    // 0x13aa2c: 0x0  nop
    ctx->pc = 0x13aa2cu;
    // NOP
label_13aa30:
    // 0x13aa30: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x13aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x13aa34: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13aa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13aa38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13aa38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13aa3c: 0x0  nop
    ctx->pc = 0x13aa3cu;
    // NOP
    // 0x13aa40: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x13aa40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13aa44: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13AA44u;
    {
        const bool branch_taken_0x13aa44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13aa44) {
            ctx->pc = 0x13AA68u;
            goto label_13aa68;
        }
    }
    ctx->pc = 0x13AA4Cu;
    // 0x13aa4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13aa4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13aa50: 0x0  nop
    ctx->pc = 0x13aa50u;
    // NOP
    // 0x13aa54: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x13aa54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13aa58: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13AA58u;
    {
        const bool branch_taken_0x13aa58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13aa58) {
            ctx->pc = 0x13AA68u;
            goto label_13aa68;
        }
    }
    ctx->pc = 0x13AA60u;
    // 0x13aa60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13AA60u;
    {
        const bool branch_taken_0x13aa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA60u;
        // 0x13aa64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa60) {
            ctx->pc = 0x13AA88u;
            goto label_13aa88;
        }
    }
    ctx->pc = 0x13AA68u;
label_13aa68:
    // 0x13aa68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13aa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa6c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x13aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13aa70: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x13aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x13aa74: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x13aa74u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13aa78: 0x7ea40000  sq          $a0, 0x0($s5)
    ctx->pc = 0x13aa78u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 4));
    // 0x13aa7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13aa80: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x13aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x13aa84: 0x0  nop
    ctx->pc = 0x13aa84u;
    // NOP
label_13aa88:
    // 0x13aa88: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13aa88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13aa8c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x13aa8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13aa90: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x13aa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13aa94: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13aa94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13aa98: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13aa9c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x13aa9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13aaa0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x13aaa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13aaa4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13aaa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13aaa8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13aaa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13aaac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13aaacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13aab0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13aab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13aab4: 0x3e00008  jr          $ra
    ctx->pc = 0x13AAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAB4u;
        // 0x13aab8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AABCu;
}
