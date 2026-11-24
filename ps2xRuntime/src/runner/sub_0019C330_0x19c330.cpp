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

// Function: sub_0019C330
// Address: 0x19c330 - 0x19c518
void sub_0019C330_0x19c330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C330_0x19c330");
#endif

    switch (ctx->pc) {
        case 0x19c3a0u: goto label_19c3a0;
        case 0x19c4f0u: goto label_19c4f0;
        default: break;
    }

    ctx->pc = 0x19c330u;

    // 0x19c330: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19c330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19c334: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x19c334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x19c338: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x19c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19c33c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19c33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19c340: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19c340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19c344: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x19c344u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c348: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19c348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19c34c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x19c34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19c350: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19c350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19c354: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x19c354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x19c358: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19c35c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19c360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c364: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x19c364u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c36c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x19c36cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c370: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x19c370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19c374: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x19c374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c378: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x19c378u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19c37c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x19c37cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c380: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C380u;
    {
        const bool branch_taken_0x19c380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C380u;
        // 0x19c384: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c380) {
            ctx->pc = 0x19C390u;
            goto label_19c390;
        }
    }
    ctx->pc = 0x19C388u;
    // 0x19c388: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x19C388u;
    {
        const bool branch_taken_0x19c388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c388) {
            ctx->pc = 0x19C4F0u;
            goto label_19c4f0;
        }
    }
    ctx->pc = 0x19C390u;
label_19c390:
    // 0x19c390: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x19c390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x19c394: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x19c394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x19c398: 0xc05e360  jal         func_178D80
    ctx->pc = 0x19C398u;
    SET_GPR_U32(ctx, 31, 0x19C3A0u);
    ctx->pc = 0x19C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C398u;
    // 0x19c39c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x19C398u, 0x19C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3A0u;
label_19c3a0:
    // 0x19c3a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c3a4: 0x10a00052  beqz        $a1, . + 4 + (0x52 << 2)
    ctx->pc = 0x19C3A4u;
    {
        const bool branch_taken_0x19c3a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c3a4) {
            ctx->pc = 0x19C4F0u;
            goto label_19c4f0;
        }
    }
    ctx->pc = 0x19C3ACu;
    // 0x19c3ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19c3b0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x19c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19c3b4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x19c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x19c3b8: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x19c3b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c3bc: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x19c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x19c3c0: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x19c3c0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x19c3c4: 0x34630116  ori         $v1, $v1, 0x116
    ctx->pc = 0x19c3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)278);
    // 0x19c3c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c3cc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x19c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x19c3d0: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x19c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x19c3d4: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x19c3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x19c3d8: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x19c3d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19c3dc: 0xa4a20014  sh          $v0, 0x14($a1)
    ctx->pc = 0x19c3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c3e0: 0xa4b50016  sh          $s5, 0x16($a1)
    ctx->pc = 0x19c3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 21));
    // 0x19c3e4: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x19c3e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x19c3e8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x19c3e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19c3ec: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x19c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x19c3f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x19c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19c3f4: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x19c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x19c3f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19c3fc: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x19c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x19c400: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19c400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19c404: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x19c404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x19c408: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c40c: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x19c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x19c410: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x19c410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x19c414: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C414u;
    {
        const bool branch_taken_0x19c414 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C414u;
        // 0x19c418: 0xaca20024  sw          $v0, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c414) {
            ctx->pc = 0x19C424u;
            goto label_19c424;
        }
    }
    ctx->pc = 0x19C41Cu;
    // 0x19c41c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C41Cu;
    {
        const bool branch_taken_0x19c41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c41c) {
            ctx->pc = 0x19C428u;
            goto label_19c428;
        }
    }
    ctx->pc = 0x19C424u;
label_19c424:
    // 0x19c424: 0x96120010  lhu         $s2, 0x10($s0)
    ctx->pc = 0x19c424u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_19c428:
    // 0x19c428: 0x6200003  bltz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C428u;
    {
        const bool branch_taken_0x19c428 = (GPR_S64(ctx, 17) < 0);
        if (branch_taken_0x19c428) {
            ctx->pc = 0x19C438u;
            goto label_19c438;
        }
    }
    ctx->pc = 0x19C430u;
    // 0x19c430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19C430u;
    {
        const bool branch_taken_0x19c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C430u;
        // 0x19c434: 0x111d00  sll         $v1, $s1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c430) {
            ctx->pc = 0x19C440u;
            goto label_19c440;
        }
    }
    ctx->pc = 0x19C438u;
label_19c438:
    // 0x19c438: 0x96110012  lhu         $s1, 0x12($s0)
    ctx->pc = 0x19c438u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x19c43c: 0x111d00  sll         $v1, $s1, 20
    ctx->pc = 0x19c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 20));
label_19c440:
    // 0x19c440: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19c440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x19c444: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19c444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19c448: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x19c448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x19c44c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x19c44cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19c450: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x19c450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x19c454: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19c454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19c458: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19c458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19c45c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c460: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x19c460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x19c464: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x19c464u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19c468: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x19c468u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19c46c: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x19c46cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x19c470: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x19c470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x19c474: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x19c474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x19c478: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x19c478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x19c47c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19c480: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19c480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19c484: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x19c484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x19c488: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x19c488u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x19c48c: 0x92040015  lbu         $a0, 0x15($s0)
    ctx->pc = 0x19c48cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x19c490: 0x92030016  lbu         $v1, 0x16($s0)
    ctx->pc = 0x19c490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x19c494: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x19c494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x19c498: 0x92060014  lbu         $a2, 0x14($s0)
    ctx->pc = 0x19c498u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19c49c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x19c49cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x19c4a0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x19c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x19c4a4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x19c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19c4a8: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x19c4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x19c4ac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19c4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x19c4b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19c4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19c4b4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x19c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x19c4b8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x19c4b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c4bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C4BCu;
    {
        const bool branch_taken_0x19c4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c4bc) {
            ctx->pc = 0x19C4E0u;
            goto label_19c4e0;
        }
    }
    ctx->pc = 0x19C4C4u;
    // 0x19c4c4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19c4c8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x19c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x19c4cc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19c4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x19c4d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c4d4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x19c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x19c4d8: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x19c4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x19c4dc: 0xa0a2000f  sb          $v0, 0xF($a1)
    ctx->pc = 0x19c4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
label_19c4e0:
    // 0x19c4e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19c4e4: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x19c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x19c4e8: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x19C4E8u;
    SET_GPR_U32(ctx, 31, 0x19C4F0u);
    ctx->pc = 0x19C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4E8u;
    // 0x19c4ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x19C4E8u, 0x19C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4F0u;
label_19c4f0:
    // 0x19c4f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x19c4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c4f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19c4f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c4f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19c4f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c4fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19c4fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c500: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19c500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c50c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c510: 0x3e00008  jr          $ra
    ctx->pc = 0x19C510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C510u;
        // 0x19c514: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C518u;
}
