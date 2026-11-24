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

// Function: sub_00345170
// Address: 0x345170 - 0x345884
void sub_00345170_0x345170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345170_0x345170");
#endif

    switch (ctx->pc) {
        case 0x3451c8u: goto label_3451c8;
        case 0x3451dcu: goto label_3451dc;
        case 0x3451f0u: goto label_3451f0;
        case 0x345244u: goto label_345244;
        case 0x34525cu: goto label_34525c;
        case 0x345270u: goto label_345270;
        case 0x345284u: goto label_345284;
        case 0x345290u: goto label_345290;
        case 0x3452a0u: goto label_3452a0;
        case 0x3452b0u: goto label_3452b0;
        case 0x3452c0u: goto label_3452c0;
        case 0x3452d0u: goto label_3452d0;
        case 0x345328u: goto label_345328;
        case 0x345338u: goto label_345338;
        case 0x345370u: goto label_345370;
        case 0x345388u: goto label_345388;
        case 0x345394u: goto label_345394;
        case 0x3453a0u: goto label_3453a0;
        case 0x3453a8u: goto label_3453a8;
        case 0x3453c0u: goto label_3453c0;
        case 0x3453f4u: goto label_3453f4;
        case 0x3454b0u: goto label_3454b0;
        case 0x3454c0u: goto label_3454c0;
        case 0x3454dcu: goto label_3454dc;
        case 0x345518u: goto label_345518;
        case 0x34552cu: goto label_34552c;
        case 0x345540u: goto label_345540;
        case 0x34554cu: goto label_34554c;
        case 0x34555cu: goto label_34555c;
        case 0x34556cu: goto label_34556c;
        case 0x3455c8u: goto label_3455c8;
        case 0x345688u: goto label_345688;
        case 0x3456a4u: goto label_3456a4;
        case 0x3456c0u: goto label_3456c0;
        case 0x345700u: goto label_345700;
        case 0x345714u: goto label_345714;
        case 0x345728u: goto label_345728;
        case 0x345734u: goto label_345734;
        case 0x345744u: goto label_345744;
        case 0x345754u: goto label_345754;
        case 0x3457c4u: goto label_3457c4;
        case 0x345870u: goto label_345870;
        default: break;
    }

    ctx->pc = 0x345170u;

    // 0x345170: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x345170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x345174: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x345174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x345178: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x345178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x34517c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34517cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x345180: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x345180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345184: 0x90830521  lbu         $v1, 0x521($a0)
    ctx->pc = 0x345184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x345188: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x345188u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x34518c: 0x102001b8  beqz        $at, . + 4 + (0x1B8 << 2)
    ctx->pc = 0x34518Cu;
    {
        const bool branch_taken_0x34518c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x345190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34518Cu;
        // 0x345190: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34518c) {
            ctx->pc = 0x345870u;
            goto label_345870;
        }
    }
    ctx->pc = 0x345194u;
    // 0x345194: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x345194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x345198: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x345198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34519c: 0x24a5f4e0  addiu       $a1, $a1, -0xB20
    ctx->pc = 0x34519cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964448));
    // 0x3451a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3451a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3451a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3451a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3451a8: 0x600008  jr          $v1
    ctx->pc = 0x3451A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3451B0u: goto label_3451b0;
            case 0x345200u: goto label_345200;
            case 0x345220u: goto label_345220;
            case 0x3454B8u: goto label_3454b8;
            case 0x345500u: goto label_345500;
            case 0x345690u: goto label_345690;
            case 0x3456E8u: goto label_3456e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3451A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3451B0u;
label_3451b0:
    // 0x3451b0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x3451B0u;
    {
        const bool branch_taken_0x3451b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3451b0) {
            ctx->pc = 0x3451E8u;
            goto label_3451e8;
        }
    }
    ctx->pc = 0x3451B8u;
    // 0x3451b8: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3451b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3451bc: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3451bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3451c0: 0xc0a97f0  jal         func_2A5FC0
    ctx->pc = 0x3451C0u;
    SET_GPR_U32(ctx, 31, 0x3451C8u);
    ctx->pc = 0x3451C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3451C0u;
    // 0x3451c4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5FC0u, 0x3451C0u, 0x3451C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3451C8u;
label_3451c8:
    // 0x3451c8: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3451c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3451cc: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3451ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3451d0: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3451d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3451d4: 0xc0a9800  jal         func_2A6000
    ctx->pc = 0x3451D4u;
    SET_GPR_U32(ctx, 31, 0x3451DCu);
    ctx->pc = 0x3451D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3451D4u;
    // 0x3451d8: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6000u, 0x3451D4u, 0x3451DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3451DCu;
label_3451dc:
    // 0x3451dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3451DCu;
    {
        const bool branch_taken_0x3451dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3451E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3451DCu;
        // 0x3451e0: 0xae220554  sw          $v0, 0x554($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3451dc) {
            ctx->pc = 0x3451F0u;
            goto label_3451f0;
        }
    }
    ctx->pc = 0x3451E4u;
    // 0x3451e4: 0x0  nop
    ctx->pc = 0x3451e4u;
    // NOP
label_3451e8:
    // 0x3451e8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3451E8u;
    SET_GPR_U32(ctx, 31, 0x3451F0u);
    ctx->pc = 0x3451ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3451E8u;
    // 0x3451ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3451E8u, 0x3451F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3451F0u;
label_3451f0:
    // 0x3451f0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3451f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3451f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3451f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3451f8: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x3451F8u;
    {
        const bool branch_taken_0x3451f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3451FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3451F8u;
        // 0x3451fc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3451f8) {
            ctx->pc = 0x345870u;
            goto label_345870;
        }
    }
    ctx->pc = 0x345200u;
label_345200:
    // 0x345200: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x345200u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x345204: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x345204u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x345208: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x345208u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x34520c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x34520cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x345210: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x345210u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x345214: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x345214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x345218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x345218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34521c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x34521cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_345220:
    // 0x345220: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x345220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x345224: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x345224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x345228: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x345228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34522c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34522cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x345230: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x345230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x345234: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x345234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x345238: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x345238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34523c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x34523Cu;
    SET_GPR_U32(ctx, 31, 0x345244u);
    ctx->pc = 0x345240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34523Cu;
    // 0x345240: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x34523Cu, 0x345244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345244u;
label_345244:
    // 0x345244: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x345244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x345248: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x345248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34524c: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x34524cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x345250: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x345250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x345254: 0xc097384  jal         func_25CE10
    ctx->pc = 0x345254u;
    SET_GPR_U32(ctx, 31, 0x34525Cu);
    ctx->pc = 0x345258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345254u;
    // 0x345258: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x345254u, 0x34525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34525Cu;
label_34525c:
    // 0x34525c: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x34525cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x345260: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x345260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x345264: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x345264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x345268: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x345268u;
    SET_GPR_U32(ctx, 31, 0x345270u);
    ctx->pc = 0x34526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345268u;
    // 0x34526c: 0x24c6f4b0  addiu       $a2, $a2, -0xB50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x345268u, 0x345270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345270u;
label_345270:
    // 0x345270: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x345270u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x345274: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x345274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x345278: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x345278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34527c: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x34527Cu;
    SET_GPR_U32(ctx, 31, 0x345284u);
    ctx->pc = 0x345280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34527Cu;
    // 0x345280: 0x24c6f4c0  addiu       $a2, $a2, -0xB40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x34527Cu, 0x345284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345284u;
label_345284:
    // 0x345284: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x345284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x345288: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x345288u;
    SET_GPR_U32(ctx, 31, 0x345290u);
    ctx->pc = 0x34528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345288u;
    // 0x34528c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x345288u, 0x345290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345290u;
label_345290:
    // 0x345290: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x345290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x345294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345298: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x345298u;
    SET_GPR_U32(ctx, 31, 0x3452A0u);
    ctx->pc = 0x34529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345298u;
    // 0x34529c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x345298u, 0x3452A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3452A0u;
label_3452a0:
    // 0x3452a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3452A0u;
    {
        const bool branch_taken_0x3452a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3452A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3452A0u;
        // 0x3452a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3452a0) {
            ctx->pc = 0x3452B0u;
            goto label_3452b0;
        }
    }
    ctx->pc = 0x3452A8u;
    // 0x3452a8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3452A8u;
    SET_GPR_U32(ctx, 31, 0x3452B0u);
    ctx->pc = 0x3452ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3452A8u;
    // 0x3452ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3452A8u, 0x3452B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3452B0u;
label_3452b0:
    // 0x3452b0: 0x8e260554  lw          $a2, 0x554($s1)
    ctx->pc = 0x3452b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
    // 0x3452b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3452b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3452b8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3452B8u;
    SET_GPR_U32(ctx, 31, 0x3452C0u);
    ctx->pc = 0x3452BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3452B8u;
    // 0x3452bc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3452B8u, 0x3452C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3452C0u;
label_3452c0:
    // 0x3452c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3452C0u;
    {
        const bool branch_taken_0x3452c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3452C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3452C0u;
        // 0x3452c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3452c0) {
            ctx->pc = 0x3452D0u;
            goto label_3452d0;
        }
    }
    ctx->pc = 0x3452C8u;
    // 0x3452c8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3452C8u;
    SET_GPR_U32(ctx, 31, 0x3452D0u);
    ctx->pc = 0x3452CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3452C8u;
    // 0x3452cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3452C8u, 0x3452D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3452D0u;
label_3452d0:
    // 0x3452d0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3452d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3452d4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3452d4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3452d8: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x3452d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3452dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3452dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3452e0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3452e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3452e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3452e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3452e8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3452e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3452ec: 0x7fa90090  sq          $t1, 0x90($sp)
    ctx->pc = 0x3452ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 9));
    // 0x3452f0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3452f0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3452f4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3452f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3452f8: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x3452f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x3452fc: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3452fcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x345300: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x345300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x345304: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x345304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x345308: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x345308u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x34530c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34530cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x345310: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x345310u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x345314: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x345314u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x345318: 0x9226055c  lbu         $a2, 0x55C($s1)
    ctx->pc = 0x345318u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1372)));
    // 0x34531c: 0xc62c0558  lwc1        $f12, 0x558($s1)
    ctx->pc = 0x34531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x345320: 0xc0c0900  jal         func_302400
    ctx->pc = 0x345320u;
    SET_GPR_U32(ctx, 31, 0x345328u);
    ctx->pc = 0x345324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345320u;
    // 0x345324: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x345320u, 0x345328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345328u;
label_345328:
    // 0x345328: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x345328u;
    {
        const bool branch_taken_0x345328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345328) {
            ctx->pc = 0x345348u;
            goto label_345348;
        }
    }
    ctx->pc = 0x345330u;
    // 0x345330: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x345330u;
    SET_GPR_U32(ctx, 31, 0x345338u);
    ctx->pc = 0x345334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345330u;
    // 0x345334: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x345330u, 0x345338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345338u;
label_345338:
    // 0x345338: 0xae200550  sw          $zero, 0x550($s1)
    ctx->pc = 0x345338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
    // 0x34533c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34533cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x345340: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x345340u;
    {
        const bool branch_taken_0x345340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345340u;
        // 0x345344: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345340) {
            ctx->pc = 0x345870u;
            goto label_345870;
        }
    }
    ctx->pc = 0x345348u;
label_345348:
    // 0x345348: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x345348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x34534c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x34534cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x345350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345354: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x345354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x345358: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x345358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x34535c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x34535cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x345360: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x345360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x345364: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x345364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345368: 0xc0c0980  jal         func_302600
    ctx->pc = 0x345368u;
    SET_GPR_U32(ctx, 31, 0x345370u);
    ctx->pc = 0x34536Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345368u;
    // 0x34536c: 0x27aa00dc  addiu       $t2, $sp, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x345368u, 0x345370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345370u;
label_345370:
    // 0x345370: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x345370u;
    {
        const bool branch_taken_0x345370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345370) {
            ctx->pc = 0x345408u;
            goto label_345408;
        }
    }
    ctx->pc = 0x345378u;
    // 0x345378: 0x8e260554  lw          $a2, 0x554($s1)
    ctx->pc = 0x345378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
    // 0x34537c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34537cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345380: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x345380u;
    SET_GPR_U32(ctx, 31, 0x345388u);
    ctx->pc = 0x345384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345380u;
    // 0x345384: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x345380u, 0x345388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345388u;
label_345388:
    // 0x345388: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x345388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34538c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x34538Cu;
    SET_GPR_U32(ctx, 31, 0x345394u);
    ctx->pc = 0x345390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34538Cu;
    // 0x345390: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x34538Cu, 0x345394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345394u;
label_345394:
    // 0x345394: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x345394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x345398: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x345398u;
    SET_GPR_U32(ctx, 31, 0x3453A0u);
    ctx->pc = 0x34539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345398u;
    // 0x34539c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x345398u, 0x3453A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3453A0u;
label_3453a0:
    // 0x3453a0: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3453A0u;
    SET_GPR_U32(ctx, 31, 0x3453A8u);
    ctx->pc = 0x3453A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3453A0u;
    // 0x3453a4: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3453A0u, 0x3453A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3453A8u;
label_3453a8:
    // 0x3453a8: 0xae200550  sw          $zero, 0x550($s1)
    ctx->pc = 0x3453a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
    // 0x3453ac: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3453acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3453b0: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3453b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3453b4: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3453b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3453b8: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x3453B8u;
    SET_GPR_U32(ctx, 31, 0x3453C0u);
    ctx->pc = 0x3453BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3453B8u;
    // 0x3453bc: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x3453B8u, 0x3453C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3453C0u;
label_3453c0:
    // 0x3453c0: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3453c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3453c4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3453c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3453c8: 0x3c021800  lui         $v0, 0x1800
    ctx->pc = 0x3453c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6144 << 16));
    // 0x3453cc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3453ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3453d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3453d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3453d4: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x3453d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x3453d8: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3453d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3453dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3453dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3453e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3453e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3453e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3453e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3453e8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3453e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3453ec: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3453ECu;
    SET_GPR_U32(ctx, 31, 0x3453F4u);
    ctx->pc = 0x3453F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3453ECu;
    // 0x3453f0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3453ECu, 0x3453F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3453F4u;
label_3453f4:
    // 0x3453f4: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3453f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3453f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3453f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3453fc: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x3453FCu;
    {
        const bool branch_taken_0x3453fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3453FCu;
        // 0x345400: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3453fc) {
            ctx->pc = 0x345870u;
            goto label_345870;
        }
    }
    ctx->pc = 0x345404u;
    // 0x345404: 0x0  nop
    ctx->pc = 0x345404u;
    // NOP
label_345408:
    // 0x345408: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x345408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x34540c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34540Cu;
    {
        const bool branch_taken_0x34540c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x345410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34540Cu;
        // 0x345410: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34540c) {
            ctx->pc = 0x345420u;
            goto label_345420;
        }
    }
    ctx->pc = 0x345414u;
    // 0x345414: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x345414u;
    {
        const bool branch_taken_0x345414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345414) {
            ctx->pc = 0x3454A0u;
            goto label_3454a0;
        }
    }
    ctx->pc = 0x34541Cu;
    // 0x34541c: 0x0  nop
    ctx->pc = 0x34541cu;
    // NOP
label_345420:
    // 0x345420: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x345420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x345424: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x345424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x345428: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x345428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34542c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34542cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x345430: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x345430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x345434: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x345434u;
    {
        const bool branch_taken_0x345434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x345434) {
            ctx->pc = 0x345470u;
            goto label_345470;
        }
    }
    ctx->pc = 0x34543Cu;
    // 0x34543c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x34543cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x345440: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x345440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x345444: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x345444u;
    {
        const bool branch_taken_0x345444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x345448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345444u;
        // 0x345448: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345444) {
            ctx->pc = 0x345498u;
            goto label_345498;
        }
    }
    ctx->pc = 0x34544Cu;
    // 0x34544c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34544cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345450: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x345450u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x345454: 0x0  nop
    ctx->pc = 0x345454u;
    // NOP
    // 0x345458: 0x0  nop
    ctx->pc = 0x345458u;
    // NOP
    // 0x34545c: 0x2010  mfhi        $a0
    ctx->pc = 0x34545cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x345460: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x345460u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x345464: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x345464u;
    {
        const bool branch_taken_0x345464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345464u;
        // 0x345468: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345464) {
            ctx->pc = 0x345498u;
            goto label_345498;
        }
    }
    ctx->pc = 0x34546Cu;
    // 0x34546c: 0x0  nop
    ctx->pc = 0x34546cu;
    // NOP
label_345470:
    // 0x345470: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x345470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x345474: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x345474u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x345478: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x345478u;
    {
        const bool branch_taken_0x345478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x345478) {
            ctx->pc = 0x345498u;
            goto label_345498;
        }
    }
    ctx->pc = 0x345480u;
    // 0x345480: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x345480u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x345484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345488: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x345488u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x34548c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34548Cu;
    {
        const bool branch_taken_0x34548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34548Cu;
        // 0x345490: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34548c) {
            ctx->pc = 0x3454A0u;
            goto label_3454a0;
        }
    }
    ctx->pc = 0x345494u;
    // 0x345494: 0x0  nop
    ctx->pc = 0x345494u;
    // NOP
label_345498:
    // 0x345498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34549c: 0x0  nop
    ctx->pc = 0x34549cu;
    // NOP
label_3454a0:
    // 0x3454a0: 0x146000f3  bnez        $v1, . + 4 + (0xF3 << 2)
    ctx->pc = 0x3454A0u;
    {
        const bool branch_taken_0x3454a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3454A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3454A0u;
        // 0x3454a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3454a0) {
            ctx->pc = 0x345870u;
            goto label_345870;
        }
    }
    ctx->pc = 0x3454A8u;
    // 0x3454a8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3454A8u;
    SET_GPR_U32(ctx, 31, 0x3454B0u);
    ctx->pc = 0x3454ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454A8u;
    // 0x3454ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3454A8u, 0x3454B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454B0u;
label_3454b0:
    // 0x3454b0: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x3454B0u;
    {
        const bool branch_taken_0x3454b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3454b0) {
            ctx->pc = 0x345870u;
            goto label_345870;
        }
    }
    ctx->pc = 0x3454B8u;
label_3454b8:
    // 0x3454b8: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3454B8u;
    SET_GPR_U32(ctx, 31, 0x3454C0u);
    ctx->pc = 0x3454BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454B8u;
    // 0x3454bc: 0x8e240554  lw          $a0, 0x554($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3454B8u, 0x3454C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454C0u;
label_3454c0:
    // 0x3454c0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3454C0u;
    {
        const bool branch_taken_0x3454c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3454C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3454C0u;
        // 0x3454c4: 0xae200554  sw          $zero, 0x554($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3454c0) {
            ctx->pc = 0x3454E0u;
            goto label_3454e0;
        }
    }
    ctx->pc = 0x3454C8u;
    // 0x3454c8: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3454c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3454cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3454ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3454d0: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3454d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3454d4: 0xc0a9820  jal         func_2A6080
    ctx->pc = 0x3454D4u;
    SET_GPR_U32(ctx, 31, 0x3454DCu);
    ctx->pc = 0x3454D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454D4u;
    // 0x3454d8: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6080u, 0x3454D4u, 0x3454DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454DCu;
label_3454dc:
    // 0x3454dc: 0xae220554  sw          $v0, 0x554($s1)
    ctx->pc = 0x3454dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 2));
label_3454e0:
    // 0x3454e0: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3454e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x3454e4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3454e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3454e8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3454e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3454ec: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3454ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3454f0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3454f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3454f4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3454f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3454f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3454f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3454fc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3454fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_345500:
    // 0x345500: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x345500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x345504: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x345504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x345508: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x345508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x34550c: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x34550cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x345510: 0xc097384  jal         func_25CE10
    ctx->pc = 0x345510u;
    SET_GPR_U32(ctx, 31, 0x345518u);
    ctx->pc = 0x345514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345510u;
    // 0x345514: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x345510u, 0x345518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345518u;
label_345518:
    // 0x345518: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x345518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x34551c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x34551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x345520: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x345520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x345524: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x345524u;
    SET_GPR_U32(ctx, 31, 0x34552Cu);
    ctx->pc = 0x345528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345524u;
    // 0x345528: 0x24c6f4b0  addiu       $a2, $a2, -0xB50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x345524u, 0x34552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34552Cu;
label_34552c:
    // 0x34552c: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x34552cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x345530: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x345530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x345534: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x345534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x345538: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x345538u;
    SET_GPR_U32(ctx, 31, 0x345540u);
    ctx->pc = 0x34553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345538u;
    // 0x34553c: 0x24c6f4c0  addiu       $a2, $a2, -0xB40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x345538u, 0x345540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345540u;
label_345540:
    // 0x345540: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x345540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x345544: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x345544u;
    SET_GPR_U32(ctx, 31, 0x34554Cu);
    ctx->pc = 0x345548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345544u;
    // 0x345548: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x345544u, 0x34554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34554Cu;
label_34554c:
    // 0x34554c: 0x8e260554  lw          $a2, 0x554($s1)
    ctx->pc = 0x34554cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
    // 0x345550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345554: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x345554u;
    SET_GPR_U32(ctx, 31, 0x34555Cu);
    ctx->pc = 0x345558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345554u;
    // 0x345558: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x345554u, 0x34555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34555Cu;
label_34555c:
    // 0x34555c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34555Cu;
    {
        const bool branch_taken_0x34555c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34555Cu;
        // 0x345560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34555c) {
            ctx->pc = 0x345570u;
            goto label_345570;
        }
    }
    ctx->pc = 0x345564u;
    // 0x345564: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x345564u;
    SET_GPR_U32(ctx, 31, 0x34556Cu);
    ctx->pc = 0x345568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345564u;
    // 0x345568: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x345564u, 0x34556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34556Cu;
label_34556c:
    // 0x34556c: 0x0  nop
    ctx->pc = 0x34556cu;
    // NOP
label_345570:
    // 0x345570: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x345570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x345574: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x345574u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x345578: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x345578u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34557c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345580: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x345580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x345584: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x345584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345588: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x345588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34558c: 0x7fa90090  sq          $t1, 0x90($sp)
    ctx->pc = 0x34558cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 9));
    // 0x345590: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x345590u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x345594: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x345594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x345598: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x345598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x34559c: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x34559cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3455a0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3455a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3455a4: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3455a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x3455a8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3455a8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3455ac: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3455acu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3455b0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3455b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3455b4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3455b4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3455b8: 0x9226055c  lbu         $a2, 0x55C($s1)
    ctx->pc = 0x3455b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1372)));
    // 0x3455bc: 0xc62c0558  lwc1        $f12, 0x558($s1)
    ctx->pc = 0x3455bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3455c0: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3455C0u;
    SET_GPR_U32(ctx, 31, 0x3455C8u);
    ctx->pc = 0x3455C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3455C0u;
    // 0x3455c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3455C0u, 0x3455C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3455C8u;
label_3455c8:
    // 0x3455c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3455C8u;
    {
        const bool branch_taken_0x3455c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3455c8) {
            ctx->pc = 0x3455E0u;
            goto label_3455e0;
        }
    }
    ctx->pc = 0x3455D0u;
    // 0x3455d0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3455d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3455d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3455d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3455d8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x3455D8u;
    {
        const bool branch_taken_0x3455d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3455DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3455D8u;
        // 0x3455dc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3455d8) {
            ctx->pc = 0x345870u;
            goto label_345870;
        }
    }
    ctx->pc = 0x3455E0u;
label_3455e0:
    // 0x3455e0: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3455e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3455e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3455E4u;
    {
        const bool branch_taken_0x3455e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3455E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3455E4u;
        // 0x3455e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3455e4) {
            ctx->pc = 0x3455F8u;
            goto label_3455f8;
        }
    }
    ctx->pc = 0x3455ECu;
    // 0x3455ec: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3455ECu;
    {
        const bool branch_taken_0x3455ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3455ec) {
            ctx->pc = 0x345678u;
            goto label_345678;
        }
    }
    ctx->pc = 0x3455F4u;
    // 0x3455f4: 0x0  nop
    ctx->pc = 0x3455f4u;
    // NOP
label_3455f8:
    // 0x3455f8: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3455f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3455fc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3455fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x345600: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x345600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x345604: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x345604u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x345608: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x345608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x34560c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34560Cu;
    {
        const bool branch_taken_0x34560c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34560c) {
            ctx->pc = 0x345648u;
            goto label_345648;
        }
    }
    ctx->pc = 0x345614u;
    // 0x345614: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x345614u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x345618: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x345618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x34561c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34561Cu;
    {
        const bool branch_taken_0x34561c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x345620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34561Cu;
        // 0x345620: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34561c) {
            ctx->pc = 0x345670u;
            goto label_345670;
        }
    }
    ctx->pc = 0x345624u;
    // 0x345624: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345628: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x345628u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34562c: 0x0  nop
    ctx->pc = 0x34562cu;
    // NOP
    // 0x345630: 0x0  nop
    ctx->pc = 0x345630u;
    // NOP
    // 0x345634: 0x2010  mfhi        $a0
    ctx->pc = 0x345634u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x345638: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x345638u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34563c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34563Cu;
    {
        const bool branch_taken_0x34563c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34563Cu;
        // 0x345640: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34563c) {
            ctx->pc = 0x345670u;
            goto label_345670;
        }
    }
    ctx->pc = 0x345644u;
    // 0x345644: 0x0  nop
    ctx->pc = 0x345644u;
    // NOP
label_345648:
    // 0x345648: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x345648u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34564c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x34564cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x345650: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x345650u;
    {
        const bool branch_taken_0x345650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x345650) {
            ctx->pc = 0x345670u;
            goto label_345670;
        }
    }
    ctx->pc = 0x345658u;
    // 0x345658: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x345658u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34565c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34565cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345660: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x345660u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x345664: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x345664u;
    {
        const bool branch_taken_0x345664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345664u;
        // 0x345668: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345664) {
            ctx->pc = 0x345678u;
            goto label_345678;
        }
    }
    ctx->pc = 0x34566Cu;
    // 0x34566c: 0x0  nop
    ctx->pc = 0x34566cu;
    // NOP
label_345670:
    // 0x345670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345674: 0x0  nop
    ctx->pc = 0x345674u;
    // NOP
label_345678:
    // 0x345678: 0x1460007d  bnez        $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x345678u;
    {
        const bool branch_taken_0x345678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345678u;
        // 0x34567c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345678) {
            ctx->pc = 0x345870u;
            goto label_345870;
        }
    }
    ctx->pc = 0x345680u;
    // 0x345680: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x345680u;
    SET_GPR_U32(ctx, 31, 0x345688u);
    ctx->pc = 0x345684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345680u;
    // 0x345684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x345680u, 0x345688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345688u;
label_345688:
    // 0x345688: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x345688u;
    {
        const bool branch_taken_0x345688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345688) {
            ctx->pc = 0x345870u;
            goto label_345870;
        }
    }
    ctx->pc = 0x345690u;
label_345690:
    // 0x345690: 0xa620053c  sh          $zero, 0x53C($s1)
    ctx->pc = 0x345690u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1340), (uint16_t)GPR_U32(ctx, 0));
    // 0x345694: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x345694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x345698: 0xa222055c  sb          $v0, 0x55C($s1)
    ctx->pc = 0x345698u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1372), (uint8_t)GPR_U32(ctx, 2));
    // 0x34569c: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x34569Cu;
    SET_GPR_U32(ctx, 31, 0x3456A4u);
    ctx->pc = 0x3456A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34569Cu;
    // 0x3456a0: 0x8e240554  lw          $a0, 0x554($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x34569Cu, 0x3456A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456A4u;
label_3456a4:
    // 0x3456a4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3456A4u;
    {
        const bool branch_taken_0x3456a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3456A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456A4u;
        // 0x3456a8: 0xae200554  sw          $zero, 0x554($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3456a4) {
            ctx->pc = 0x3456C8u;
            goto label_3456c8;
        }
    }
    ctx->pc = 0x3456ACu;
    // 0x3456ac: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3456acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3456b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3456b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3456b4: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3456b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3456b8: 0xc0a9830  jal         func_2A60C0
    ctx->pc = 0x3456B8u;
    SET_GPR_U32(ctx, 31, 0x3456C0u);
    ctx->pc = 0x3456BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3456B8u;
    // 0x3456bc: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A60C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A60C0u, 0x3456B8u, 0x3456C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456C0u;
label_3456c0:
    // 0x3456c0: 0xae220554  sw          $v0, 0x554($s1)
    ctx->pc = 0x3456c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 2));
    // 0x3456c4: 0x0  nop
    ctx->pc = 0x3456c4u;
    // NOP
label_3456c8:
    // 0x3456c8: 0x8622052a  lh          $v0, 0x52A($s1)
    ctx->pc = 0x3456c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1322)));
    // 0x3456cc: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3456ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3456d0: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3456d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3456d4: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3456d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3456d8: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3456d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3456dc: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3456dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3456e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3456e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3456e4: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3456e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3456e8:
    // 0x3456e8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3456e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3456ec: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3456ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3456f0: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x3456f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x3456f4: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x3456f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3456f8: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3456F8u;
    SET_GPR_U32(ctx, 31, 0x345700u);
    ctx->pc = 0x3456FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3456F8u;
    // 0x3456fc: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3456F8u, 0x345700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345700u;
label_345700:
    // 0x345700: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x345700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x345704: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x345704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x345708: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x345708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34570c: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x34570Cu;
    SET_GPR_U32(ctx, 31, 0x345714u);
    ctx->pc = 0x345710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34570Cu;
    // 0x345710: 0x24c6f4b0  addiu       $a2, $a2, -0xB50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x34570Cu, 0x345714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345714u;
label_345714:
    // 0x345714: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x345714u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x345718: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x345718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34571c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x34571cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x345720: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x345720u;
    SET_GPR_U32(ctx, 31, 0x345728u);
    ctx->pc = 0x345724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345720u;
    // 0x345724: 0x24c6f4c0  addiu       $a2, $a2, -0xB40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x345720u, 0x345728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345728u;
label_345728:
    // 0x345728: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x345728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x34572c: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x34572Cu;
    SET_GPR_U32(ctx, 31, 0x345734u);
    ctx->pc = 0x345730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34572Cu;
    // 0x345730: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x34572Cu, 0x345734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345734u;
label_345734:
    // 0x345734: 0x8e260554  lw          $a2, 0x554($s1)
    ctx->pc = 0x345734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
    // 0x345738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34573c: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x34573Cu;
    SET_GPR_U32(ctx, 31, 0x345744u);
    ctx->pc = 0x345740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34573Cu;
    // 0x345740: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x34573Cu, 0x345744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345744u;
label_345744:
    // 0x345744: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x345744u;
    {
        const bool branch_taken_0x345744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345744u;
        // 0x345748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345744) {
            ctx->pc = 0x345758u;
            goto label_345758;
        }
    }
    ctx->pc = 0x34574Cu;
    // 0x34574c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34574Cu;
    SET_GPR_U32(ctx, 31, 0x345754u);
    ctx->pc = 0x345750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34574Cu;
    // 0x345750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34574Cu, 0x345754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345754u;
label_345754:
    // 0x345754: 0x0  nop
    ctx->pc = 0x345754u;
    // NOP
label_345758:
    // 0x345758: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x345758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34575c: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x34575Cu;
    {
        const bool branch_taken_0x34575c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x345760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34575Cu;
        // 0x345760: 0x28610051  slti        $at, $v1, 0x51 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)81) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34575c) {
            ctx->pc = 0x3457C8u;
            goto label_3457c8;
        }
    }
    ctx->pc = 0x345764u;
    // 0x345764: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x345764u;
    {
        const bool branch_taken_0x345764 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x345764) {
            ctx->pc = 0x3457C8u;
            goto label_3457c8;
        }
    }
    ctx->pc = 0x34576Cu;
    // 0x34576c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34576cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x345770: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x345770u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345774: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x345774u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x345778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34577c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x34577cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x345780: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x345780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345784: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x345784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x345788: 0x7fa90090  sq          $t1, 0x90($sp)
    ctx->pc = 0x345788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 9));
    // 0x34578c: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x34578cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x345790: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x345790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x345794: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x345794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x345798: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x345798u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x34579c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34579cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3457a0: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3457a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x3457a4: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3457a4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3457a8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3457a8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3457ac: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3457acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3457b0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3457b0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3457b4: 0x9226055c  lbu         $a2, 0x55C($s1)
    ctx->pc = 0x3457b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1372)));
    // 0x3457b8: 0xc62c0558  lwc1        $f12, 0x558($s1)
    ctx->pc = 0x3457b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3457bc: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3457BCu;
    SET_GPR_U32(ctx, 31, 0x3457C4u);
    ctx->pc = 0x3457C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3457BCu;
    // 0x3457c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3457BCu, 0x3457C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3457C4u;
label_3457c4:
    // 0x3457c4: 0x0  nop
    ctx->pc = 0x3457c4u;
    // NOP
label_3457c8:
    // 0x3457c8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3457c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3457cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3457CCu;
    {
        const bool branch_taken_0x3457cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3457D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457CCu;
        // 0x3457d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3457cc) {
            ctx->pc = 0x3457E0u;
            goto label_3457e0;
        }
    }
    ctx->pc = 0x3457D4u;
    // 0x3457d4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3457D4u;
    {
        const bool branch_taken_0x3457d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3457d4) {
            ctx->pc = 0x345860u;
            goto label_345860;
        }
    }
    ctx->pc = 0x3457DCu;
    // 0x3457dc: 0x0  nop
    ctx->pc = 0x3457dcu;
    // NOP
label_3457e0:
    // 0x3457e0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3457e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3457e4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3457e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3457e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3457e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3457ec: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3457ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3457f0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3457f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3457f4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3457F4u;
    {
        const bool branch_taken_0x3457f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3457f4) {
            ctx->pc = 0x345830u;
            goto label_345830;
        }
    }
    ctx->pc = 0x3457FCu;
    // 0x3457fc: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3457fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x345800: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x345800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x345804: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x345804u;
    {
        const bool branch_taken_0x345804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x345808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345804u;
        // 0x345808: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345804) {
            ctx->pc = 0x345858u;
            goto label_345858;
        }
    }
    ctx->pc = 0x34580Cu;
    // 0x34580c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34580cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345810: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x345810u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x345814: 0x0  nop
    ctx->pc = 0x345814u;
    // NOP
    // 0x345818: 0x0  nop
    ctx->pc = 0x345818u;
    // NOP
    // 0x34581c: 0x2010  mfhi        $a0
    ctx->pc = 0x34581cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x345820: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x345820u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x345824: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x345824u;
    {
        const bool branch_taken_0x345824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345824u;
        // 0x345828: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345824) {
            ctx->pc = 0x345858u;
            goto label_345858;
        }
    }
    ctx->pc = 0x34582Cu;
    // 0x34582c: 0x0  nop
    ctx->pc = 0x34582cu;
    // NOP
label_345830:
    // 0x345830: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x345830u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x345834: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x345834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x345838: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x345838u;
    {
        const bool branch_taken_0x345838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x345838) {
            ctx->pc = 0x345858u;
            goto label_345858;
        }
    }
    ctx->pc = 0x345840u;
    // 0x345840: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x345840u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x345844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345848: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x345848u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x34584c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34584Cu;
    {
        const bool branch_taken_0x34584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34584Cu;
        // 0x345850: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34584c) {
            ctx->pc = 0x345860u;
            goto label_345860;
        }
    }
    ctx->pc = 0x345854u;
    // 0x345854: 0x0  nop
    ctx->pc = 0x345854u;
    // NOP
label_345858:
    // 0x345858: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34585c: 0x0  nop
    ctx->pc = 0x34585cu;
    // NOP
label_345860:
    // 0x345860: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x345860u;
    {
        const bool branch_taken_0x345860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x345864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345860u;
        // 0x345864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345860) {
            ctx->pc = 0x345870u;
            goto label_345870;
        }
    }
    ctx->pc = 0x345868u;
    // 0x345868: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x345868u;
    SET_GPR_U32(ctx, 31, 0x345870u);
    ctx->pc = 0x34586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345868u;
    // 0x34586c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x345868u, 0x345870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345870u;
label_345870:
    // 0x345870: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x345870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x345874: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x345874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x345878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34587c: 0x3e00008  jr          $ra
    ctx->pc = 0x34587Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34587Cu;
        // 0x345880: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34587Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345884u;
}
