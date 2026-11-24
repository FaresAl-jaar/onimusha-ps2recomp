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

// Function: sub_00305760
// Address: 0x305760 - 0x305b94
void sub_00305760_0x305760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305760_0x305760");
#endif

    switch (ctx->pc) {
        case 0x3057d0u: goto label_3057d0;
        case 0x3057e0u: goto label_3057e0;
        case 0x305834u: goto label_305834;
        case 0x305844u: goto label_305844;
        case 0x305854u: goto label_305854;
        case 0x3058b0u: goto label_3058b0;
        case 0x3058f0u: goto label_3058f0;
        case 0x305908u: goto label_305908;
        case 0x3059c0u: goto label_3059c0;
        case 0x3059d8u: goto label_3059d8;
        case 0x3059f0u: goto label_3059f0;
        case 0x305a28u: goto label_305a28;
        case 0x305a58u: goto label_305a58;
        case 0x305a68u: goto label_305a68;
        case 0x305ad8u: goto label_305ad8;
        case 0x305b80u: goto label_305b80;
        default: break;
    }

    ctx->pc = 0x305760u;

    // 0x305760: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x305760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x305764: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x305764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305768: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x305768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30576c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30576cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x305770: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x305770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x305774: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x305774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305778: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x305778u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x30577c: 0x10a300b2  beq         $a1, $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x30577Cu;
    {
        const bool branch_taken_0x30577c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x305780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30577Cu;
        // 0x305780: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30577c) {
            ctx->pc = 0x305A48u;
            goto label_305a48;
        }
    }
    ctx->pc = 0x305784u;
    // 0x305784: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x305784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x305788: 0x10a3008f  beq         $a1, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x305788u;
    {
        const bool branch_taken_0x305788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x305788) {
            ctx->pc = 0x3059C8u;
            goto label_3059c8;
        }
    }
    ctx->pc = 0x305790u;
    // 0x305790: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x305790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x305794: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x305794u;
    {
        const bool branch_taken_0x305794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x305798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305794u;
        // 0x305798: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305794) {
            ctx->pc = 0x305810u;
            goto label_305810;
        }
    }
    ctx->pc = 0x30579Cu;
    // 0x30579c: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30579Cu;
    {
        const bool branch_taken_0x30579c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x30579c) {
            ctx->pc = 0x3057F0u;
            goto label_3057f0;
        }
    }
    ctx->pc = 0x3057A4u;
    // 0x3057a4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3057A4u;
    {
        const bool branch_taken_0x3057a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3057a4) {
            ctx->pc = 0x3057B8u;
            goto label_3057b8;
        }
    }
    ctx->pc = 0x3057ACu;
    // 0x3057ac: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x3057ACu;
    {
        const bool branch_taken_0x3057ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3057ac) {
            ctx->pc = 0x305B80u;
            goto label_305b80;
        }
    }
    ctx->pc = 0x3057B4u;
    // 0x3057b4: 0x0  nop
    ctx->pc = 0x3057b4u;
    // NOP
label_3057b8:
    // 0x3057b8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3057B8u;
    {
        const bool branch_taken_0x3057b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3057b8) {
            ctx->pc = 0x3057D8u;
            goto label_3057d8;
        }
    }
    ctx->pc = 0x3057C0u;
    // 0x3057c0: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3057c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3057c4: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3057c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3057c8: 0xc0a9cac  jal         func_2A72B0
    ctx->pc = 0x3057C8u;
    SET_GPR_U32(ctx, 31, 0x3057D0u);
    ctx->pc = 0x3057CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3057C8u;
    // 0x3057cc: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A72B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A72B0u, 0x3057C8u, 0x3057D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3057D0u;
label_3057d0:
    // 0x3057d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3057D0u;
    {
        const bool branch_taken_0x3057d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3057D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057D0u;
        // 0x3057d4: 0xae220550  sw          $v0, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3057d0) {
            ctx->pc = 0x3057E0u;
            goto label_3057e0;
        }
    }
    ctx->pc = 0x3057D8u;
label_3057d8:
    // 0x3057d8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3057D8u;
    SET_GPR_U32(ctx, 31, 0x3057E0u);
    ctx->pc = 0x3057DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3057D8u;
    // 0x3057dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3057D8u, 0x3057E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3057E0u;
label_3057e0:
    // 0x3057e0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3057e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3057e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3057e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3057e8: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x3057E8u;
    {
        const bool branch_taken_0x3057e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3057ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057E8u;
        // 0x3057ec: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3057e8) {
            ctx->pc = 0x305B80u;
            goto label_305b80;
        }
    }
    ctx->pc = 0x3057F0u;
label_3057f0:
    // 0x3057f0: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3057f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3057f4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3057f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3057f8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3057f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3057fc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3057fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x305800: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x305800u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x305804: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x305804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x305808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30580c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x30580cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_305810:
    // 0x305810: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x305810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x305814: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x305814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x305818: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x305818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x30581c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30581cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x305820: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x305820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x305824: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x305824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305828: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x305828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30582c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x30582Cu;
    SET_GPR_U32(ctx, 31, 0x305834u);
    ctx->pc = 0x305830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30582Cu;
    // 0x305830: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x30582Cu, 0x305834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305834u;
label_305834:
    // 0x305834: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x305834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x305838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x305838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30583c: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x30583Cu;
    SET_GPR_U32(ctx, 31, 0x305844u);
    ctx->pc = 0x305840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30583Cu;
    // 0x305840: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x30583Cu, 0x305844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305844u;
label_305844:
    // 0x305844: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x305844u;
    {
        const bool branch_taken_0x305844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305844u;
        // 0x305848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305844) {
            ctx->pc = 0x305858u;
            goto label_305858;
        }
    }
    ctx->pc = 0x30584Cu;
    // 0x30584c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30584Cu;
    SET_GPR_U32(ctx, 31, 0x305854u);
    ctx->pc = 0x305850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30584Cu;
    // 0x305850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30584Cu, 0x305854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305854u;
label_305854:
    // 0x305854: 0x0  nop
    ctx->pc = 0x305854u;
    // NOP
label_305858:
    // 0x305858: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x30585c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x30585cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x305860: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x305860u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x305864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x305864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305868: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x305868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30586c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30586cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305870: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x305874: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x305874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x305878: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x305878u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x30587c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30587cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x305880: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x305880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x305884: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x305884u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x305888: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x30588c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x30588cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x305890: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x305890u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x305894: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x305894u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x305898: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x305898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x30589c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x30589cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3058a0: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x3058a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x3058a4: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x3058a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3058a8: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3058A8u;
    SET_GPR_U32(ctx, 31, 0x3058B0u);
    ctx->pc = 0x3058ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3058A8u;
    // 0x3058ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3058A8u, 0x3058B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3058B0u;
label_3058b0:
    // 0x3058b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3058B0u;
    {
        const bool branch_taken_0x3058b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3058b0) {
            ctx->pc = 0x3058C8u;
            goto label_3058c8;
        }
    }
    ctx->pc = 0x3058B8u;
    // 0x3058b8: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3058b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3058bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3058bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3058c0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x3058C0u;
    {
        const bool branch_taken_0x3058c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3058C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058C0u;
        // 0x3058c4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058c0) {
            ctx->pc = 0x305B80u;
            goto label_305b80;
        }
    }
    ctx->pc = 0x3058C8u;
label_3058c8:
    // 0x3058c8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3058c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3058cc: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x3058ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x3058d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3058d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3058d4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3058d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3058d8: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x3058d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3058dc: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3058dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3058e0: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x3058e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3058e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3058e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3058e8: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3058E8u;
    SET_GPR_U32(ctx, 31, 0x3058F0u);
    ctx->pc = 0x3058ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3058E8u;
    // 0x3058ec: 0x27aa00ac  addiu       $t2, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3058E8u, 0x3058F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3058F0u;
label_3058f0:
    // 0x3058f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3058F0u;
    {
        const bool branch_taken_0x3058f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3058f0) {
            ctx->pc = 0x305918u;
            goto label_305918;
        }
    }
    ctx->pc = 0x3058F8u;
    // 0x3058f8: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3058f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3058fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3058fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305900: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x305900u;
    SET_GPR_U32(ctx, 31, 0x305908u);
    ctx->pc = 0x305904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305900u;
    // 0x305904: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x305900u, 0x305908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305908u;
label_305908:
    // 0x305908: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x305908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x30590c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x305910: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x305910u;
    {
        const bool branch_taken_0x305910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305910u;
        // 0x305914: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305910) {
            ctx->pc = 0x305B80u;
            goto label_305b80;
        }
    }
    ctx->pc = 0x305918u;
label_305918:
    // 0x305918: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x305918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x30591c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30591Cu;
    {
        const bool branch_taken_0x30591c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30591Cu;
        // 0x305920: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30591c) {
            ctx->pc = 0x305930u;
            goto label_305930;
        }
    }
    ctx->pc = 0x305924u;
    // 0x305924: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x305924u;
    {
        const bool branch_taken_0x305924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305924) {
            ctx->pc = 0x3059B0u;
            goto label_3059b0;
        }
    }
    ctx->pc = 0x30592Cu;
    // 0x30592c: 0x0  nop
    ctx->pc = 0x30592cu;
    // NOP
label_305930:
    // 0x305930: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x305930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x305934: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x305934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x305938: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x305938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30593c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x30593cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x305940: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x305940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x305944: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x305944u;
    {
        const bool branch_taken_0x305944 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x305944) {
            ctx->pc = 0x305980u;
            goto label_305980;
        }
    }
    ctx->pc = 0x30594Cu;
    // 0x30594c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x30594cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x305950: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x305950u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x305954: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x305954u;
    {
        const bool branch_taken_0x305954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x305958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305954u;
        // 0x305958: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305954) {
            ctx->pc = 0x3059A8u;
            goto label_3059a8;
        }
    }
    ctx->pc = 0x30595Cu;
    // 0x30595c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30595cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305960: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x305960u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x305964: 0x0  nop
    ctx->pc = 0x305964u;
    // NOP
    // 0x305968: 0x0  nop
    ctx->pc = 0x305968u;
    // NOP
    // 0x30596c: 0x2010  mfhi        $a0
    ctx->pc = 0x30596cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x305970: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x305970u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x305974: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x305974u;
    {
        const bool branch_taken_0x305974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305974u;
        // 0x305978: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305974) {
            ctx->pc = 0x3059A8u;
            goto label_3059a8;
        }
    }
    ctx->pc = 0x30597Cu;
    // 0x30597c: 0x0  nop
    ctx->pc = 0x30597cu;
    // NOP
label_305980:
    // 0x305980: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x305980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x305984: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x305984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x305988: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x305988u;
    {
        const bool branch_taken_0x305988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305988) {
            ctx->pc = 0x3059A8u;
            goto label_3059a8;
        }
    }
    ctx->pc = 0x305990u;
    // 0x305990: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x305990u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x305994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305998: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x305998u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x30599c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30599Cu;
    {
        const bool branch_taken_0x30599c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3059A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30599Cu;
        // 0x3059a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30599c) {
            ctx->pc = 0x3059B0u;
            goto label_3059b0;
        }
    }
    ctx->pc = 0x3059A4u;
    // 0x3059a4: 0x0  nop
    ctx->pc = 0x3059a4u;
    // NOP
label_3059a8:
    // 0x3059a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3059a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3059ac: 0x0  nop
    ctx->pc = 0x3059acu;
    // NOP
label_3059b0:
    // 0x3059b0: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x3059B0u;
    {
        const bool branch_taken_0x3059b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3059B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059B0u;
        // 0x3059b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059b0) {
            ctx->pc = 0x305B80u;
            goto label_305b80;
        }
    }
    ctx->pc = 0x3059B8u;
    // 0x3059b8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3059B8u;
    SET_GPR_U32(ctx, 31, 0x3059C0u);
    ctx->pc = 0x3059BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059B8u;
    // 0x3059bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3059B8u, 0x3059C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059C0u;
label_3059c0:
    // 0x3059c0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3059C0u;
    {
        const bool branch_taken_0x3059c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3059c0) {
            ctx->pc = 0x305B80u;
            goto label_305b80;
        }
    }
    ctx->pc = 0x3059C8u;
label_3059c8:
    // 0x3059c8: 0xa2230558  sb          $v1, 0x558($s1)
    ctx->pc = 0x3059c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1368), (uint8_t)GPR_U32(ctx, 3));
    // 0x3059cc: 0xa620053c  sh          $zero, 0x53C($s1)
    ctx->pc = 0x3059ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1340), (uint16_t)GPR_U32(ctx, 0));
    // 0x3059d0: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3059D0u;
    SET_GPR_U32(ctx, 31, 0x3059D8u);
    ctx->pc = 0x3059D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059D0u;
    // 0x3059d4: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3059D0u, 0x3059D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059D8u;
label_3059d8:
    // 0x3059d8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3059D8u;
    {
        const bool branch_taken_0x3059d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3059DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059D8u;
        // 0x3059dc: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059d8) {
            ctx->pc = 0x305A28u;
            goto label_305a28;
        }
    }
    ctx->pc = 0x3059E0u;
    // 0x3059e0: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3059e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3059e4: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3059e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3059e8: 0xc0a99e8  jal         func_2A67A0
    ctx->pc = 0x3059E8u;
    SET_GPR_U32(ctx, 31, 0x3059F0u);
    ctx->pc = 0x3059ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059E8u;
    // 0x3059ec: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67A0u, 0x3059E8u, 0x3059F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059F0u;
label_3059f0:
    // 0x3059f0: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3059f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3059f4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3059f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3059f8: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3059f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3059fc: 0x3c021500  lui         $v0, 0x1500
    ctx->pc = 0x3059fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5376 << 16));
    // 0x305a00: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x305a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x305a04: 0x34458202  ori         $a1, $v0, 0x8202
    ctx->pc = 0x305a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33282);
    // 0x305a08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a0c: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x305a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x305a10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x305a10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x305a14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x305a18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a1c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x305a1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a20: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x305A20u;
    SET_GPR_U32(ctx, 31, 0x305A28u);
    ctx->pc = 0x305A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A20u;
    // 0x305a24: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x305A20u, 0x305A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A28u;
label_305a28:
    // 0x305a28: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x305a28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x305a2c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x305a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x305a30: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x305a30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x305a34: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x305a34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x305a38: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x305a38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x305a3c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x305a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x305a40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x305a44: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x305a44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_305a48:
    // 0x305a48: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x305a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x305a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x305a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a50: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x305A50u;
    SET_GPR_U32(ctx, 31, 0x305A58u);
    ctx->pc = 0x305A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A50u;
    // 0x305a54: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x305A50u, 0x305A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A58u;
label_305a58:
    // 0x305a58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305A58u;
    {
        const bool branch_taken_0x305a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A58u;
        // 0x305a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305a58) {
            ctx->pc = 0x305A68u;
            goto label_305a68;
        }
    }
    ctx->pc = 0x305A60u;
    // 0x305a60: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x305A60u;
    SET_GPR_U32(ctx, 31, 0x305A68u);
    ctx->pc = 0x305A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A60u;
    // 0x305a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x305A60u, 0x305A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A68u;
label_305a68:
    // 0x305a68: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x305a68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x305a6c: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x305a6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x305a70: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x305A70u;
    {
        const bool branch_taken_0x305a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x305A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A70u;
        // 0x305a74: 0x2881001a  slti        $at, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305a70) {
            ctx->pc = 0x305AD8u;
            goto label_305ad8;
        }
    }
    ctx->pc = 0x305A78u;
    // 0x305a78: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x305A78u;
    {
        const bool branch_taken_0x305a78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a78) {
            ctx->pc = 0x305AD8u;
            goto label_305ad8;
        }
    }
    ctx->pc = 0x305A80u;
    // 0x305a80: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x305a84: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x305a84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x305a88: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x305a88u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x305a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x305a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a90: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x305a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x305a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a98: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x305a9c: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x305a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x305aa0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x305aa0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x305aa4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x305aa8: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x305aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x305aac: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x305aacu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x305ab0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x305ab4: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x305ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x305ab8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x305ab8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x305abc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x305abcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x305ac0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x305ac0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x305ac4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x305ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x305ac8: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x305ac8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x305acc: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x305accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x305ad0: 0xc0c0900  jal         func_302400
    ctx->pc = 0x305AD0u;
    SET_GPR_U32(ctx, 31, 0x305AD8u);
    ctx->pc = 0x305AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AD0u;
    // 0x305ad4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x305AD0u, 0x305AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AD8u;
label_305ad8:
    // 0x305ad8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x305ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x305adc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x305ADCu;
    {
        const bool branch_taken_0x305adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305ADCu;
        // 0x305ae0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305adc) {
            ctx->pc = 0x305AF0u;
            goto label_305af0;
        }
    }
    ctx->pc = 0x305AE4u;
    // 0x305ae4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x305AE4u;
    {
        const bool branch_taken_0x305ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305ae4) {
            ctx->pc = 0x305B70u;
            goto label_305b70;
        }
    }
    ctx->pc = 0x305AECu;
    // 0x305aec: 0x0  nop
    ctx->pc = 0x305aecu;
    // NOP
label_305af0:
    // 0x305af0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x305af0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x305af4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x305af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x305af8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x305af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x305afc: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x305afcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x305b00: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x305b00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x305b04: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x305B04u;
    {
        const bool branch_taken_0x305b04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x305b04) {
            ctx->pc = 0x305B40u;
            goto label_305b40;
        }
    }
    ctx->pc = 0x305B0Cu;
    // 0x305b0c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x305b0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x305b10: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x305b10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x305b14: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x305B14u;
    {
        const bool branch_taken_0x305b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x305B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B14u;
        // 0x305b18: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b14) {
            ctx->pc = 0x305B68u;
            goto label_305b68;
        }
    }
    ctx->pc = 0x305B1Cu;
    // 0x305b1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305b20: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x305b20u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x305b24: 0x0  nop
    ctx->pc = 0x305b24u;
    // NOP
    // 0x305b28: 0x0  nop
    ctx->pc = 0x305b28u;
    // NOP
    // 0x305b2c: 0x2010  mfhi        $a0
    ctx->pc = 0x305b2cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x305b30: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x305b30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x305b34: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x305B34u;
    {
        const bool branch_taken_0x305b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B34u;
        // 0x305b38: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b34) {
            ctx->pc = 0x305B68u;
            goto label_305b68;
        }
    }
    ctx->pc = 0x305B3Cu;
    // 0x305b3c: 0x0  nop
    ctx->pc = 0x305b3cu;
    // NOP
label_305b40:
    // 0x305b40: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x305b40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x305b44: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x305b44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x305b48: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x305B48u;
    {
        const bool branch_taken_0x305b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305b48) {
            ctx->pc = 0x305B68u;
            goto label_305b68;
        }
    }
    ctx->pc = 0x305B50u;
    // 0x305b50: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x305b50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x305b54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305b58: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x305b58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x305b5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x305B5Cu;
    {
        const bool branch_taken_0x305b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B5Cu;
        // 0x305b60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b5c) {
            ctx->pc = 0x305B70u;
            goto label_305b70;
        }
    }
    ctx->pc = 0x305B64u;
    // 0x305b64: 0x0  nop
    ctx->pc = 0x305b64u;
    // NOP
label_305b68:
    // 0x305b68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305b6c: 0x0  nop
    ctx->pc = 0x305b6cu;
    // NOP
label_305b70:
    // 0x305b70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x305B70u;
    {
        const bool branch_taken_0x305b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x305B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B70u;
        // 0x305b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b70) {
            ctx->pc = 0x305B80u;
            goto label_305b80;
        }
    }
    ctx->pc = 0x305B78u;
    // 0x305b78: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x305B78u;
    SET_GPR_U32(ctx, 31, 0x305B80u);
    ctx->pc = 0x305B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B78u;
    // 0x305b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x305B78u, 0x305B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B80u;
label_305b80:
    // 0x305b80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x305b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x305b84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x305b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305b88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x305b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x305B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B8Cu;
        // 0x305b90: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305B94u;
}
