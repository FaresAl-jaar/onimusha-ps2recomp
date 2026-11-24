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

// Function: sub_00271500
// Address: 0x271500 - 0x27175c
void sub_00271500_0x271500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271500_0x271500");
#endif

    switch (ctx->pc) {
        case 0x271570u: goto label_271570;
        case 0x271704u: goto label_271704;
        case 0x271724u: goto label_271724;
        default: break;
    }

    ctx->pc = 0x271500u;

    // 0x271500: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x271500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x271504: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x271504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x271508: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x271508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x27150c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27150cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x271510: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x271510u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271514: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x271514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x271518: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x271518u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27151c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x271520: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x271520u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271524: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x271524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x271528: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x271528u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27152c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27152cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x271530: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x271530u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271534: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x271538: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x271538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27153c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271540: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x271540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271544: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x271544u;
    {
        const bool branch_taken_0x271544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x271548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271544u;
        // 0x271548: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271544) {
            ctx->pc = 0x271558u;
            goto label_271558;
        }
    }
    ctx->pc = 0x27154Cu;
    // 0x27154c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27154Cu;
    {
        const bool branch_taken_0x27154c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27154c) {
            ctx->pc = 0x271560u;
            goto label_271560;
        }
    }
    ctx->pc = 0x271554u;
    // 0x271554: 0x0  nop
    ctx->pc = 0x271554u;
    // NOP
label_271558:
    // 0x271558: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x271558u;
    {
        const bool branch_taken_0x271558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271558u;
        // 0x27155c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271558) {
            ctx->pc = 0x271730u;
            goto label_271730;
        }
    }
    ctx->pc = 0x271560u;
label_271560:
    // 0x271560: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x271560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x271564: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x271564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x271568: 0xc05e360  jal         func_178D80
    ctx->pc = 0x271568u;
    SET_GPR_U32(ctx, 31, 0x271570u);
    ctx->pc = 0x27156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271568u;
    // 0x27156c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x271568u, 0x271570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271570u;
label_271570:
    // 0x271570: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271570u;
    {
        const bool branch_taken_0x271570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271570) {
            ctx->pc = 0x271580u;
            goto label_271580;
        }
    }
    ctx->pc = 0x271578u;
    // 0x271578: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x271578u;
    {
        const bool branch_taken_0x271578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271578u;
        // 0x27157c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271578) {
            ctx->pc = 0x271730u;
            goto label_271730;
        }
    }
    ctx->pc = 0x271580u;
label_271580:
    // 0x271580: 0x86870004  lh          $a3, 0x4($s4)
    ctx->pc = 0x271580u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x271584: 0x86850006  lh          $a1, 0x6($s4)
    ctx->pc = 0x271584u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x271588: 0x151e02  srl         $v1, $s5, 24
    ctx->pc = 0x271588u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 24));
    // 0x27158c: 0x86840008  lh          $a0, 0x8($s4)
    ctx->pc = 0x27158cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x271590: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x271590u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x271594: 0x8686000a  lh          $a2, 0xA($s4)
    ctx->pc = 0x271594u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x271598: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x271598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27159c: 0x93a30090  lbu         $v1, 0x90($sp)
    ctx->pc = 0x27159cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2715a0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2715a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2715a4: 0x24ea0008  addiu       $t2, $a3, 0x8
    ctx->pc = 0x2715a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2715a8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2715a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2715ac: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x2715acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2715b0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2715b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2715b4: 0xa243c  dsll32      $a0, $t2, 16
    ctx->pc = 0x2715b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 16));
    // 0x2715b8: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2715b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2715bc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2715bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2715c0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2715c0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2715c4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2715c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2715c8: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x2715c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2715cc: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x2715ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2715d0: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x2715d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2715d4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2715d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2715d8: 0x306a000f  andi        $t2, $v1, 0xF
    ctx->pc = 0x2715d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2715dc: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2715dcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2715e0: 0x15490007  bne         $t2, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2715E0u;
    {
        const bool branch_taken_0x2715e0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        ctx->pc = 0x2715E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715E0u;
        // 0x2715e4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715e0) {
            ctx->pc = 0x271600u;
            goto label_271600;
        }
    }
    ctx->pc = 0x2715E8u;
    // 0x2715e8: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2715E8u;
    {
        const bool branch_taken_0x2715e8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2715ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715E8u;
        // 0x2715ec: 0x114843  sra         $t1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715e8) {
            ctx->pc = 0x2715F8u;
            goto label_2715f8;
        }
    }
    ctx->pc = 0x2715F0u;
    // 0x2715f0: 0x26290001  addiu       $t1, $s1, 0x1
    ctx->pc = 0x2715f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2715f4: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x2715f4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
label_2715f8:
    // 0x2715f8: 0x2699823  subu        $s3, $s3, $t1
    ctx->pc = 0x2715f8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x2715fc: 0x0  nop
    ctx->pc = 0x2715fcu;
    // NOP
label_271600:
    // 0x271600: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x271600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271604: 0x15490002  bne         $t2, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x271604u;
    {
        const bool branch_taken_0x271604 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        if (branch_taken_0x271604) {
            ctx->pc = 0x271610u;
            goto label_271610;
        }
    }
    ctx->pc = 0x27160Cu;
    // 0x27160c: 0x2719823  subu        $s3, $s3, $s1
    ctx->pc = 0x27160cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_271610:
    // 0x271610: 0x306900f0  andi        $t1, $v1, 0xF0
    ctx->pc = 0x271610u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x271614: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x271614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x271618: 0x15230007  bne         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x271618u;
    {
        const bool branch_taken_0x271618 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        if (branch_taken_0x271618) {
            ctx->pc = 0x271638u;
            goto label_271638;
        }
    }
    ctx->pc = 0x271620u;
    // 0x271620: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271620u;
    {
        const bool branch_taken_0x271620 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x271624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271620u;
        // 0x271624: 0x101843  sra         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271620) {
            ctx->pc = 0x271630u;
            goto label_271630;
        }
    }
    ctx->pc = 0x271628u;
    // 0x271628: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x271628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27162c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x27162cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_271630:
    // 0x271630: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x271630u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x271634: 0x0  nop
    ctx->pc = 0x271634u;
    // NOP
label_271638:
    // 0x271638: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x271638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27163c: 0x15230002  bne         $t1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27163Cu;
    {
        const bool branch_taken_0x27163c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        if (branch_taken_0x27163c) {
            ctx->pc = 0x271648u;
            goto label_271648;
        }
    }
    ctx->pc = 0x271644u;
    // 0x271644: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x271644u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_271648:
    // 0x271648: 0x26630700  addiu       $v1, $s3, 0x700
    ctx->pc = 0x271648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1792));
    // 0x27164c: 0x34900  sll         $t1, $v1, 4
    ctx->pc = 0x27164cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x271650: 0x115100  sll         $t2, $s1, 4
    ctx->pc = 0x271650u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x271654: 0x26430f20  addiu       $v1, $s2, 0xF20
    ctx->pc = 0x271654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3872));
    // 0x271658: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x271658u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x27165c: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x27165cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x271660: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x271660u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x271664: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x271664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x271668: 0x104d00  sll         $t1, $s0, 20
    ctx->pc = 0x271668u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 20));
    // 0x27166c: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x27166cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x271670: 0x854825  or          $t1, $a0, $a1
    ctx->pc = 0x271670u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x271674: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x271674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x271678: 0x72c3c  dsll32      $a1, $a3, 16
    ctx->pc = 0x271678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 16));
    // 0x27167c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x27167cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x271680: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x271680u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x271684: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x271684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x271688: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x271688u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x27168c: 0x3c062028  lui         $a2, 0x2028
    ctx->pc = 0x27168cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8232 << 16));
    // 0x271690: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x271690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x271694: 0x34c60156  ori         $a2, $a2, 0x156
    ctx->pc = 0x271694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)342);
    // 0x271698: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x271698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x27169c: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x27169cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x2716a0: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2716a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2716a4: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x2716a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x2716a8: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x2716a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x2716ac: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x2716acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x2716b0: 0xac570024  sw          $s7, 0x24($v0)
    ctx->pc = 0x2716b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 23));
    // 0x2716b4: 0xac4a0028  sw          $t2, 0x28($v0)
    ctx->pc = 0x2716b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 10));
    // 0x2716b8: 0xac490018  sw          $t1, 0x18($v0)
    ctx->pc = 0x2716b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 9));
    // 0x2716bc: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x2716bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x2716c0: 0x8f83811c  lw          $v1, -0x7EE4($gp)
    ctx->pc = 0x2716c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
    // 0x2716c4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2716c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2716c8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2716c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2716cc: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x2716ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x2716d0: 0xa4560016  sh          $s6, 0x16($v0)
    ctx->pc = 0x2716d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 22));
    // 0x2716d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2716d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2716d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2716d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2716dc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2716dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2716e0: 0xa048000f  sb          $t0, 0xF($v0)
    ctx->pc = 0x2716e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 8));
    // 0x2716e4: 0x8f838898  lw          $v1, -0x7768($gp)
    ctx->pc = 0x2716e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936728)));
    // 0x2716e8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2716E8u;
    {
        const bool branch_taken_0x2716e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2716e8) {
            ctx->pc = 0x271710u;
            goto label_271710;
        }
    }
    ctx->pc = 0x2716F0u;
    // 0x2716f0: 0x8f868118  lw          $a2, -0x7EE8($gp)
    ctx->pc = 0x2716f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x2716f4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2716f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2716f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2716f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2716fc: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2716FCu;
    SET_GPR_U32(ctx, 31, 0x271704u);
    ctx->pc = 0x271700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2716FCu;
    // 0x271700: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2716FCu, 0x271704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271704u;
label_271704:
    // 0x271704: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x271704u;
    {
        const bool branch_taken_0x271704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271704) {
            ctx->pc = 0x271728u;
            goto label_271728;
        }
    }
    ctx->pc = 0x27170Cu;
    // 0x27170c: 0x0  nop
    ctx->pc = 0x27170cu;
    // NOP
label_271710:
    // 0x271710: 0x8f868118  lw          $a2, -0x7EE8($gp)
    ctx->pc = 0x271710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x271714: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x271714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x271718: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x271718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27171c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x27171Cu;
    SET_GPR_U32(ctx, 31, 0x271724u);
    ctx->pc = 0x271720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27171Cu;
    // 0x271720: 0x2484cc40  addiu       $a0, $a0, -0x33C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x27171Cu, 0x271724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271724u;
label_271724:
    // 0x271724: 0x0  nop
    ctx->pc = 0x271724u;
    // NOP
label_271728:
    // 0x271728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27172c: 0x0  nop
    ctx->pc = 0x27172cu;
    // NOP
label_271730:
    // 0x271730: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x271730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x271734: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x271734u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x271738: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x271738u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27173c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27173cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x271740: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x271740u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x271744: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x271744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271748: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x271748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27174c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27174cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271754: 0x3e00008  jr          $ra
    ctx->pc = 0x271754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271754u;
        // 0x271758: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27175Cu;
}
