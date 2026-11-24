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

// Function: sub_00178370
// Address: 0x178370 - 0x178798
void sub_00178370_0x178370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178370_0x178370");
#endif

    switch (ctx->pc) {
        case 0x178450u: goto label_178450;
        case 0x1784e0u: goto label_1784e0;
        case 0x178504u: goto label_178504;
        case 0x178528u: goto label_178528;
        default: break;
    }

    ctx->pc = 0x178370u;

    // 0x178370: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x178370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
    // 0x178374: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x178374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178378: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x178378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17837c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17837cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x178380: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x178380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x178384: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x178388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17838c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17838cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178394: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x178394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x178398: 0x31b42  srl         $v1, $v1, 13
    ctx->pc = 0x178398u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 13));
    // 0x17839c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x17839cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1783a0: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x1783a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x1783a4: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x1783a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1783a8: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x1783a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x1783ac: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1783ACu;
    {
        const bool branch_taken_0x1783ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1783B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783ACu;
        // 0x1783b0: 0x38b00001  xori        $s0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1783ac) {
            ctx->pc = 0x1783F0u;
            goto label_1783f0;
        }
    }
    ctx->pc = 0x1783B4u;
    // 0x1783b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1783b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1783b8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1783B8u;
    {
        const bool branch_taken_0x1783b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1783b8) {
            ctx->pc = 0x1783F0u;
            goto label_1783f0;
        }
    }
    ctx->pc = 0x1783C0u;
    // 0x1783c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1783C0u;
    {
        const bool branch_taken_0x1783c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1783c0) {
            ctx->pc = 0x1783D0u;
            goto label_1783d0;
        }
    }
    ctx->pc = 0x1783C8u;
    // 0x1783c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1783C8u;
    {
        const bool branch_taken_0x1783c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1783c8) {
            ctx->pc = 0x178410u;
            goto label_178410;
        }
    }
    ctx->pc = 0x1783D0u;
label_1783d0:
    // 0x1783d0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1783d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1783d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1783d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1783d8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1783d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1783dc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1783dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1783e0: 0x245128d0  addiu       $s1, $v0, 0x28D0
    ctx->pc = 0x1783e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10448));
    // 0x1783e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1783E4u;
    {
        const bool branch_taken_0x1783e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1783E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783E4u;
        // 0x1783e8: 0x26260110  addiu       $a2, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1783e4) {
            ctx->pc = 0x178410u;
            goto label_178410;
        }
    }
    ctx->pc = 0x1783ECu;
    // 0x1783ec: 0x0  nop
    ctx->pc = 0x1783ecu;
    // NOP
label_1783f0:
    // 0x1783f0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1783f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1783f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1783f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1783f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1783f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1783fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1783fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x178400: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178404: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x178404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x178408: 0x24512b10  addiu       $s1, $v0, 0x2B10
    ctx->pc = 0x178408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11024));
    // 0x17840c: 0x262600a0  addiu       $a2, $s1, 0xA0
    ctx->pc = 0x17840cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_178410:
    // 0x178410: 0x9243000a  lbu         $v1, 0xA($s2)
    ctx->pc = 0x178410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x178414: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x178414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x178418: 0x264423b0  addiu       $a0, $s2, 0x23B0
    ctx->pc = 0x178418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 9136));
    // 0x17841c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17841cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178420: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x178420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178424: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x178424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178428: 0xa6220040  sh          $v0, 0x40($s1)
    ctx->pc = 0x178428u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x17842c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x17842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x178430: 0xa6230044  sh          $v1, 0x44($s1)
    ctx->pc = 0x178430u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x178434: 0xa6220050  sh          $v0, 0x50($s1)
    ctx->pc = 0x178434u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x178438: 0xa6230054  sh          $v1, 0x54($s1)
    ctx->pc = 0x178438u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x17843c: 0xa64222d0  sh          $v0, 0x22D0($s2)
    ctx->pc = 0x17843cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8912), (uint16_t)GPR_U32(ctx, 2));
    // 0x178440: 0xa64322d4  sh          $v1, 0x22D4($s2)
    ctx->pc = 0x178440u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8916), (uint16_t)GPR_U32(ctx, 3));
    // 0x178444: 0xa64222e0  sh          $v0, 0x22E0($s2)
    ctx->pc = 0x178444u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8928), (uint16_t)GPR_U32(ctx, 2));
    // 0x178448: 0xc061c60  jal         func_187180
    ctx->pc = 0x178448u;
    SET_GPR_U32(ctx, 31, 0x178450u);
    ctx->pc = 0x17844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178448u;
    // 0x17844c: 0xa64322e4  sh          $v1, 0x22E4($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 8932), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x178448u, 0x178450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178450u;
label_178450:
    // 0x178450: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x178450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x178454: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x178454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x178458: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x178458u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x17845c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17845cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x178460: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x178460u;
    {
        const bool branch_taken_0x178460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178460u;
        // 0x178464: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178460) {
            ctx->pc = 0x178498u;
            goto label_178498;
        }
    }
    ctx->pc = 0x178468u;
    // 0x178468: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x178468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x17846c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x17846cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x178470: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x178470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x178474: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x178474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x178478: 0xdc622860  ld          $v0, 0x2860($v1)
    ctx->pc = 0x178478u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 10336)));
    // 0x17847c: 0xfc220000  sd          $v0, 0x0($at)
    ctx->pc = 0x17847cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 0), GPR_U64(ctx, 2));
    // 0x178480: 0xdc622890  ld          $v0, 0x2890($v1)
    ctx->pc = 0x178480u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 10384)));
    // 0x178484: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x178484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x178488: 0xfc220080  sd          $v0, 0x80($at)
    ctx->pc = 0x178488u;
    runtime->Store64(rdram, ctx, 0x12000080u, GPR_U64(ctx, 2));
    // 0x17848c: 0xdc622878  ld          $v0, 0x2878($v1)
    ctx->pc = 0x17848cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 10360)));
    // 0x178490: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x178490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x178494: 0xfc2200a0  sd          $v0, 0xA0($at)
    ctx->pc = 0x178494u;
    runtime->Store64(rdram, ctx, 0x120000A0u, GPR_U64(ctx, 2));
label_178498:
    // 0x178498: 0x864e2de0  lh          $t6, 0x2DE0($s2)
    ctx->pc = 0x178498u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11744)));
    // 0x17849c: 0x864d2de4  lh          $t5, 0x2DE4($s2)
    ctx->pc = 0x17849cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11748)));
    // 0x1784a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1784a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1784a4: 0x864b2de2  lh          $t3, 0x2DE2($s2)
    ctx->pc = 0x1784a4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11746)));
    // 0x1784a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1784a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784ac: 0x86432de6  lh          $v1, 0x2DE6($s2)
    ctx->pc = 0x1784acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11750)));
    // 0x1784b0: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1784b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1784b4: 0x864c2de8  lh          $t4, 0x2DE8($s2)
    ctx->pc = 0x1784b4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11752)));
    // 0x1784b8: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x1784b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1784bc: 0x86422dea  lh          $v0, 0x2DEA($s2)
    ctx->pc = 0x1784bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11754)));
    // 0x1784c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1784c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1784c4: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x1784c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1784c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1784c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784cc: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x1784ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1784d0: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x1784d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1784d4: 0x18d9821  addu        $s3, $t4, $t5
    ctx->pc = 0x1784d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x1784d8: 0xc040f7e  jal         func_103DF8
    ctx->pc = 0x1784D8u;
    SET_GPR_U32(ctx, 31, 0x1784E0u);
    ctx->pc = 0x1784DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1784D8u;
    // 0x1784dc: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103DF8u, 0x1784D8u, 0x1784E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1784E0u;
label_1784e0:
    // 0x1784e0: 0x13443c  dsll32      $t0, $s3, 16
    ctx->pc = 0x1784e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1784e4: 0x144c3c  dsll32      $t1, $s4, 16
    ctx->pc = 0x1784e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1784e8: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1784e8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1784ec: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x1784ecu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1784f0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1784f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1784f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1784f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784f8: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1784f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1784fc: 0xc040a5c  jal         func_102970
    ctx->pc = 0x1784FCu;
    SET_GPR_U32(ctx, 31, 0x178504u);
    ctx->pc = 0x178500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1784FCu;
    // 0x178500: 0x240700e0  addiu       $a3, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102970u, 0x1784FCu, 0x178504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178504u;
label_178504:
    // 0x178504: 0x13443c  dsll32      $t0, $s3, 16
    ctx->pc = 0x178504u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << (32 + 16));
    // 0x178508: 0x144c3c  dsll32      $t1, $s4, 16
    ctx->pc = 0x178508u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 16));
    // 0x17850c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x17850cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x178510: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x178510u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x178514: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x178514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x178518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17851c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x17851cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x178520: 0xc040a5c  jal         func_102970
    ctx->pc = 0x178520u;
    SET_GPR_U32(ctx, 31, 0x178528u);
    ctx->pc = 0x178524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178520u;
    // 0x178524: 0x240700e0  addiu       $a3, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102970u, 0x178520u, 0x178528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178528u;
label_178528:
    // 0x178528: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x178528u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17852c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x17852cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x178530: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x178530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x178534: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x178534u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x178538: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x178538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17853c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17853cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178540: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x178540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x178544: 0x2434021  addu        $t0, $s2, $v1
    ctx->pc = 0x178544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x178548: 0x24890060  addiu       $t1, $a0, 0x60
    ctx->pc = 0x178548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x17854c: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x17854cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x178550: 0x8d2b0010  lw          $t3, 0x10($t1)
    ctx->pc = 0x178550u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x178554: 0x34657fff  ori         $a1, $v1, 0x7FFF
    ctx->pc = 0x178554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x178558: 0x8d0a2870  lw          $t2, 0x2870($t0)
    ctx->pc = 0x178558u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10352)));
    // 0x17855c: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x17855cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x178560: 0x2404f000  addiu       $a0, $zero, -0x1000
    ctx->pc = 0x178560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x178564: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x178564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
    // 0x178568: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x178568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x17856c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x17856cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x178570: 0xb5b3c  dsll32      $t3, $t3, 12
    ctx->pc = 0x178570u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 12));
    // 0x178574: 0xb5efe  dsrl32      $t3, $t3, 27
    ctx->pc = 0x178574u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 27));
    // 0x178578: 0x1455024  and         $t2, $t2, $a1
    ctx->pc = 0x178578u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x17857c: 0x316b001f  andi        $t3, $t3, 0x1F
    ctx->pc = 0x17857cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)31);
    // 0x178580: 0xb5bc0  sll         $t3, $t3, 15
    ctx->pc = 0x178580u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 15));
    // 0x178584: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x178584u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x178588: 0xad0a2870  sw          $t2, 0x2870($t0)
    ctx->pc = 0x178588u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 10352), GPR_U32(ctx, 10));
    // 0x17858c: 0x952b0018  lhu         $t3, 0x18($t1)
    ctx->pc = 0x17858cu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x178590: 0x950a2878  lhu         $t2, 0x2878($t0)
    ctx->pc = 0x178590u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10360)));
    // 0x178594: 0x316b0fff  andi        $t3, $t3, 0xFFF
    ctx->pc = 0x178594u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4095);
    // 0x178598: 0x1445024  and         $t2, $t2, $a0
    ctx->pc = 0x178598u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x17859c: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x17859cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1785a0: 0xa50a2878  sh          $t2, 0x2878($t0)
    ctx->pc = 0x1785a0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10360), (uint16_t)GPR_U32(ctx, 10));
    // 0x1785a4: 0x8d2b0018  lw          $t3, 0x18($t1)
    ctx->pc = 0x1785a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1785a8: 0x8d0a2878  lw          $t2, 0x2878($t0)
    ctx->pc = 0x1785a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10360)));
    // 0x1785ac: 0xb5a7c  dsll32      $t3, $t3, 9
    ctx->pc = 0x1785acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 9));
    // 0x1785b0: 0xb5d7e  dsrl32      $t3, $t3, 21
    ctx->pc = 0x1785b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 21));
    // 0x1785b4: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1785b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1785b8: 0x316b07ff  andi        $t3, $t3, 0x7FF
    ctx->pc = 0x1785b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2047);
    // 0x1785bc: 0xb5b00  sll         $t3, $t3, 12
    ctx->pc = 0x1785bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 12));
    // 0x1785c0: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1785c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1785c4: 0xad0a2878  sw          $t2, 0x2878($t0)
    ctx->pc = 0x1785c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 10360), GPR_U32(ctx, 10));
    // 0x1785c8: 0x8d2a001c  lw          $t2, 0x1C($t1)
    ctx->pc = 0x1785c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x1785cc: 0x8d09287c  lw          $t1, 0x287C($t0)
    ctx->pc = 0x1785ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10364)));
    // 0x1785d0: 0xa527c  dsll32      $t2, $t2, 9
    ctx->pc = 0x1785d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 9));
    // 0x1785d4: 0xa557e  dsrl32      $t2, $t2, 21
    ctx->pc = 0x1785d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 21));
    // 0x1785d8: 0x314a07ff  andi        $t2, $t2, 0x7FF
    ctx->pc = 0x1785d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2047);
    // 0x1785dc: 0xa5300  sll         $t2, $t2, 12
    ctx->pc = 0x1785dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 12));
    // 0x1785e0: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x1785e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x1785e4: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1785e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1785e8: 0xad09287c  sw          $t1, 0x287C($t0)
    ctx->pc = 0x1785e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 10364), GPR_U32(ctx, 9));
    // 0x1785ec: 0x8faa0070  lw          $t2, 0x70($sp)
    ctx->pc = 0x1785ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1785f0: 0x8e492870  lw          $t1, 0x2870($s2)
    ctx->pc = 0x1785f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10352)));
    // 0x1785f4: 0xa533c  dsll32      $t2, $t2, 12
    ctx->pc = 0x1785f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 12));
    // 0x1785f8: 0xa56fe  dsrl32      $t2, $t2, 27
    ctx->pc = 0x1785f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 27));
    // 0x1785fc: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x1785fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x178600: 0x314a001f  andi        $t2, $t2, 0x1F
    ctx->pc = 0x178600u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)31);
    // 0x178604: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x178604u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x178608: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x178608u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x17860c: 0xae492870  sw          $t1, 0x2870($s2)
    ctx->pc = 0x17860cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10352), GPR_U32(ctx, 9));
    // 0x178610: 0x94ea0000  lhu         $t2, 0x0($a3)
    ctx->pc = 0x178610u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x178614: 0x96492878  lhu         $t1, 0x2878($s2)
    ctx->pc = 0x178614u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10360)));
    // 0x178618: 0x314a0fff  andi        $t2, $t2, 0xFFF
    ctx->pc = 0x178618u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4095);
    // 0x17861c: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x17861cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x178620: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x178620u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x178624: 0xa6492878  sh          $t1, 0x2878($s2)
    ctx->pc = 0x178624u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10360), (uint16_t)GPR_U32(ctx, 9));
    // 0x178628: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x178628u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17862c: 0x8e472878  lw          $a3, 0x2878($s2)
    ctx->pc = 0x17862cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10360)));
    // 0x178630: 0x94a7c  dsll32      $t1, $t1, 9
    ctx->pc = 0x178630u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 9));
    // 0x178634: 0x94d7e  dsrl32      $t1, $t1, 21
    ctx->pc = 0x178634u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 21));
    // 0x178638: 0x312907ff  andi        $t1, $t1, 0x7FF
    ctx->pc = 0x178638u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2047);
    // 0x17863c: 0x94b00  sll         $t1, $t1, 12
    ctx->pc = 0x17863cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 12));
    // 0x178640: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x178640u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x178644: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x178644u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x178648: 0xae472878  sw          $a3, 0x2878($s2)
    ctx->pc = 0x178648u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10360), GPR_U32(ctx, 7));
    // 0x17864c: 0x8fa9007c  lw          $t1, 0x7C($sp)
    ctx->pc = 0x17864cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x178650: 0x8e47287c  lw          $a3, 0x287C($s2)
    ctx->pc = 0x178650u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10364)));
    // 0x178654: 0x94a7c  dsll32      $t1, $t1, 9
    ctx->pc = 0x178654u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 9));
    // 0x178658: 0x94d7e  dsrl32      $t1, $t1, 21
    ctx->pc = 0x178658u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 21));
    // 0x17865c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x17865cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x178660: 0x312907ff  andi        $t1, $t1, 0x7FF
    ctx->pc = 0x178660u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2047);
    // 0x178664: 0x94b00  sll         $t1, $t1, 12
    ctx->pc = 0x178664u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 12));
    // 0x178668: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x178668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x17866c: 0xae47287c  sw          $a3, 0x287C($s2)
    ctx->pc = 0x17866cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10364), GPR_U32(ctx, 7));
    // 0x178670: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x178670u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x178674: 0x8e4728a8  lw          $a3, 0x28A8($s2)
    ctx->pc = 0x178674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10408)));
    // 0x178678: 0x94b3c  dsll32      $t1, $t1, 12
    ctx->pc = 0x178678u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 12));
    // 0x17867c: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x17867cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x178680: 0x93efe  dsrl32      $a3, $t1, 27
    ctx->pc = 0x178680u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) >> (32 + 27));
    // 0x178684: 0x30e7001f  andi        $a3, $a3, 0x1F
    ctx->pc = 0x178684u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x178688: 0x73bc0  sll         $a3, $a3, 15
    ctx->pc = 0x178688u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
    // 0x17868c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x17868cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x178690: 0xae4528a8  sw          $a1, 0x28A8($s2)
    ctx->pc = 0x178690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10408), GPR_U32(ctx, 5));
    // 0x178694: 0x94c70000  lhu         $a3, 0x0($a2)
    ctx->pc = 0x178694u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x178698: 0x964528b0  lhu         $a1, 0x28B0($s2)
    ctx->pc = 0x178698u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10416)));
    // 0x17869c: 0x30e70fff  andi        $a3, $a3, 0xFFF
    ctx->pc = 0x17869cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x1786a0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1786a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1786a4: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x1786a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x1786a8: 0xa64428b0  sh          $a0, 0x28B0($s2)
    ctx->pc = 0x1786a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10416), (uint16_t)GPR_U32(ctx, 4));
    // 0x1786ac: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1786acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1786b0: 0x8e4428b0  lw          $a0, 0x28B0($s2)
    ctx->pc = 0x1786b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10416)));
    // 0x1786b4: 0x52a7c  dsll32      $a1, $a1, 9
    ctx->pc = 0x1786b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 9));
    // 0x1786b8: 0x52d7e  dsrl32      $a1, $a1, 21
    ctx->pc = 0x1786b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 21));
    // 0x1786bc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1786bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1786c0: 0x30a507ff  andi        $a1, $a1, 0x7FF
    ctx->pc = 0x1786c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x1786c4: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x1786c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x1786c8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1786c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1786cc: 0xae4428b0  sw          $a0, 0x28B0($s2)
    ctx->pc = 0x1786ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10416), GPR_U32(ctx, 4));
    // 0x1786d0: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x1786d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1786d4: 0x8e4428b4  lw          $a0, 0x28B4($s2)
    ctx->pc = 0x1786d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10420)));
    // 0x1786d8: 0x52a7c  dsll32      $a1, $a1, 9
    ctx->pc = 0x1786d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 9));
    // 0x1786dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1786dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1786e0: 0x5257e  dsrl32      $a0, $a1, 21
    ctx->pc = 0x1786e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> (32 + 21));
    // 0x1786e4: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x1786e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x1786e8: 0x42300  sll         $a0, $a0, 12
    ctx->pc = 0x1786e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x1786ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1786ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1786f0: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1786F0u;
    {
        const bool branch_taken_0x1786f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1786F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786F0u;
        // 0x1786f4: 0xae4328b4  sw          $v1, 0x28B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 10420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786f0) {
            ctx->pc = 0x178710u;
            goto label_178710;
        }
    }
    ctx->pc = 0x1786F8u;
    // 0x1786f8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1786f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1786fc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1786fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x178700: 0xfe4322b0  sd          $v1, 0x22B0($s2)
    ctx->pc = 0x178700u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8880), GPR_U64(ctx, 3));
    // 0x178704: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x178704u;
    {
        const bool branch_taken_0x178704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178704u;
        // 0x178708: 0xfe4322c0  sd          $v1, 0x22C0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 8896), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178704) {
            ctx->pc = 0x178720u;
            goto label_178720;
        }
    }
    ctx->pc = 0x17870Cu;
    // 0x17870c: 0x0  nop
    ctx->pc = 0x17870cu;
    // NOP
label_178710:
    // 0x178710: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x178710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x178714: 0xfe4322b0  sd          $v1, 0x22B0($s2)
    ctx->pc = 0x178714u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8880), GPR_U64(ctx, 3));
    // 0x178718: 0xfe4322c0  sd          $v1, 0x22C0($s2)
    ctx->pc = 0x178718u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8896), GPR_U64(ctx, 3));
    // 0x17871c: 0x0  nop
    ctx->pc = 0x17871cu;
    // NOP
label_178720:
    // 0x178720: 0x25032860  addiu       $v1, $t0, 0x2860
    ctx->pc = 0x178720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 10336));
    // 0x178724: 0xae432178  sw          $v1, 0x2178($s2)
    ctx->pc = 0x178724u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8568), GPR_U32(ctx, 3));
    // 0x178728: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x178728u;
    {
        const bool branch_taken_0x178728 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178728u;
        // 0x17872c: 0xae512174  sw          $s1, 0x2174($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8564), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178728) {
            ctx->pc = 0x178758u;
            goto label_178758;
        }
    }
    ctx->pc = 0x178730u;
    // 0x178730: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x178730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x178734: 0x3c042402  lui         $a0, 0x2402
    ctx->pc = 0x178734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9218 << 16));
    // 0x178738: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x178738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17873c: 0x34830800  ori         $v1, $a0, 0x800
    ctx->pc = 0x17873cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x178740: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x178740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x178744: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x178744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x178748: 0xfe442390  sd          $a0, 0x2390($s2)
    ctx->pc = 0x178748u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 9104), GPR_U64(ctx, 4));
    // 0x17874c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17874Cu;
    {
        const bool branch_taken_0x17874c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17874Cu;
        // 0x178750: 0xfe432398  sd          $v1, 0x2398($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 9112), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17874c) {
            ctx->pc = 0x178778u;
            goto label_178778;
        }
    }
    ctx->pc = 0x178754u;
    // 0x178754: 0x0  nop
    ctx->pc = 0x178754u;
    // NOP
label_178758:
    // 0x178758: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x178758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17875c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x17875cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x178760: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x178760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x178764: 0x34640800  ori         $a0, $v1, 0x800
    ctx->pc = 0x178764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x178768: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x178768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x17876c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x17876cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x178770: 0xfe442390  sd          $a0, 0x2390($s2)
    ctx->pc = 0x178770u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 9104), GPR_U64(ctx, 4));
    // 0x178774: 0xfe432398  sd          $v1, 0x2398($s2)
    ctx->pc = 0x178774u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 9112), GPR_U64(ctx, 3));
label_178778:
    // 0x178778: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x178778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17877c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17877cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178780: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x178780u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178784: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17878c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17878cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178790: 0x3e00008  jr          $ra
    ctx->pc = 0x178790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178790u;
        // 0x178794: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178798u;
}
