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

// Function: sub_001313A0
// Address: 0x1313a0 - 0x131680
void sub_001313A0_0x1313a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001313A0_0x1313a0");
#endif

    switch (ctx->pc) {
        case 0x1313ccu: goto label_1313cc;
        case 0x1313dcu: goto label_1313dc;
        case 0x1313fcu: goto label_1313fc;
        case 0x131424u: goto label_131424;
        default: break;
    }

    ctx->pc = 0x1313a0u;

    // 0x1313a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1313a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1313a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1313a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1313a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1313a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1313ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1313acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1313b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1313b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1313b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1313b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1313b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313bc: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x1313bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1313c0: 0x263000d4  addiu       $s0, $s1, 0xD4
    ctx->pc = 0x1313c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
    // 0x1313c4: 0xc04da1a  jal         func_136868
    ctx->pc = 0x1313C4u;
    SET_GPR_U32(ctx, 31, 0x1313CCu);
    ctx->pc = 0x1313C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313C4u;
    // 0x1313c8: 0x26050028  addiu       $a1, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136868u, 0x1313C4u, 0x1313CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313CCu;
label_1313cc:
    // 0x1313cc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1313CCu;
    {
        const bool branch_taken_0x1313cc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1313D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313CCu;
        // 0x1313d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1313cc) {
            ctx->pc = 0x1313E8u;
            goto label_1313e8;
        }
    }
    ctx->pc = 0x1313D4u;
    // 0x1313d4: 0xc04c610  jal         func_131840
    ctx->pc = 0x1313D4u;
    SET_GPR_U32(ctx, 31, 0x1313DCu);
    ctx->pc = 0x1313D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313D4u;
    // 0x1313d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131840u, 0x1313D4u, 0x1313DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313DCu;
label_1313dc:
    // 0x1313dc: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1313DCu;
    {
        const bool branch_taken_0x1313dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1313dc) {
            ctx->pc = 0x131668u;
            goto label_131668;
        }
    }
    ctx->pc = 0x1313E4u;
    // 0x1313e4: 0x0  nop
    ctx->pc = 0x1313e4u;
    // NOP
label_1313e8:
    // 0x1313e8: 0x28410013  slti        $at, $v0, 0x13
    ctx->pc = 0x1313e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x1313ec: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1313ECu;
    {
        const bool branch_taken_0x1313ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1313F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313ECu;
        // 0x1313f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1313ec) {
            ctx->pc = 0x131408u;
            goto label_131408;
        }
    }
    ctx->pc = 0x1313F4u;
    // 0x1313f4: 0xc04c610  jal         func_131840
    ctx->pc = 0x1313F4u;
    SET_GPR_U32(ctx, 31, 0x1313FCu);
    ctx->pc = 0x1313F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313F4u;
    // 0x1313f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131840u, 0x1313F4u, 0x1313FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313FCu;
label_1313fc:
    // 0x1313fc: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1313FCu;
    {
        const bool branch_taken_0x1313fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1313fc) {
            ctx->pc = 0x131668u;
            goto label_131668;
        }
    }
    ctx->pc = 0x131404u;
    // 0x131404: 0x0  nop
    ctx->pc = 0x131404u;
    // NOP
label_131408:
    // 0x131408: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x131408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13140c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13140Cu;
    {
        const bool branch_taken_0x13140c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13140c) {
            ctx->pc = 0x131430u;
            goto label_131430;
        }
    }
    ctx->pc = 0x131414u;
    // 0x131414: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x131414u;
    {
        const bool branch_taken_0x131414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x131418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131414u;
        // 0x131418: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131414) {
            ctx->pc = 0x131430u;
            goto label_131430;
        }
    }
    ctx->pc = 0x13141Cu;
    // 0x13141c: 0xc04c610  jal         func_131840
    ctx->pc = 0x13141Cu;
    SET_GPR_U32(ctx, 31, 0x131424u);
    ctx->pc = 0x131420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13141Cu;
    // 0x131420: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131840u, 0x13141Cu, 0x131424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131424u;
label_131424:
    // 0x131424: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x131424u;
    {
        const bool branch_taken_0x131424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131424u;
        // 0x131428: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131424) {
            ctx->pc = 0x131668u;
            goto label_131668;
        }
    }
    ctx->pc = 0x13142Cu;
    // 0x13142c: 0x0  nop
    ctx->pc = 0x13142cu;
    // NOP
label_131430:
    // 0x131430: 0x92060029  lbu         $a2, 0x29($s0)
    ctx->pc = 0x131430u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x131434: 0x92040028  lbu         $a0, 0x28($s0)
    ctx->pc = 0x131434u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x131438: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x131438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13143c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131440: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x131440u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x131444: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x131444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x131448: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x131448u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x13144c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x13144Cu;
    {
        const bool branch_taken_0x13144c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x131450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13144Cu;
        // 0x131450: 0x3884ffff  xori        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13144c) {
            ctx->pc = 0x131468u;
            goto label_131468;
        }
    }
    ctx->pc = 0x131454u;
    // 0x131454: 0x30850003  andi        $a1, $a0, 0x3
    ctx->pc = 0x131454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x131458: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x131458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13145c: 0x3084fff0  andi        $a0, $a0, 0xFFF0
    ctx->pc = 0x13145cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65520);
    // 0x131460: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x131460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x131464: 0x0  nop
    ctx->pc = 0x131464u;
    // NOP
label_131468:
    // 0x131468: 0x10c00041  beqz        $a2, . + 4 + (0x41 << 2)
    ctx->pc = 0x131468u;
    {
        const bool branch_taken_0x131468 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x131468) {
            ctx->pc = 0x131570u;
            goto label_131570;
        }
    }
    ctx->pc = 0x131470u;
    // 0x131470: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x131470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x131474: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x131474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x131478: 0x14a0003d  bnez        $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x131478u;
    {
        const bool branch_taken_0x131478 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x131478) {
            ctx->pc = 0x131570u;
            goto label_131570;
        }
    }
    ctx->pc = 0x131480u;
    // 0x131480: 0x9206002a  lbu         $a2, 0x2A($s0)
    ctx->pc = 0x131480u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x131484: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x131484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x131488: 0xa2060018  sb          $a2, 0x18($s0)
    ctx->pc = 0x131488u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x13148c: 0x9206002b  lbu         $a2, 0x2B($s0)
    ctx->pc = 0x13148cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x131490: 0xa2060019  sb          $a2, 0x19($s0)
    ctx->pc = 0x131490u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 6));
    // 0x131494: 0x9206002c  lbu         $a2, 0x2C($s0)
    ctx->pc = 0x131494u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x131498: 0xa206001a  sb          $a2, 0x1A($s0)
    ctx->pc = 0x131498u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 6));
    // 0x13149c: 0x9206002d  lbu         $a2, 0x2D($s0)
    ctx->pc = 0x13149cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x1314a0: 0xa206001b  sb          $a2, 0x1B($s0)
    ctx->pc = 0x1314a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 6));
    // 0x1314a4: 0x92280003  lbu         $t0, 0x3($s1)
    ctx->pc = 0x1314a4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1314a8: 0x92060018  lbu         $a2, 0x18($s0)
    ctx->pc = 0x1314a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1314ac: 0xa83823  subu        $a3, $a1, $t0
    ctx->pc = 0x1314acu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1314b0: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x1314b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1314b4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1314B4u;
    {
        const bool branch_taken_0x1314b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314B4u;
        // 0x1314b8: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314b4) {
            ctx->pc = 0x1314C8u;
            goto label_1314c8;
        }
    }
    ctx->pc = 0x1314BCu;
    // 0x1314bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1314BCu;
    {
        const bool branch_taken_0x1314bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314BCu;
        // 0x1314c0: 0x852025  or          $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314bc) {
            ctx->pc = 0x1314E0u;
            goto label_1314e0;
        }
    }
    ctx->pc = 0x1314C4u;
    // 0x1314c4: 0x0  nop
    ctx->pc = 0x1314c4u;
    // NOP
label_1314c8:
    // 0x1314c8: 0x25050080  addiu       $a1, $t0, 0x80
    ctx->pc = 0x1314c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x1314cc: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x1314ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1314d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1314D0u;
    {
        const bool branch_taken_0x1314d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314D0u;
        // 0x1314d4: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314d0) {
            ctx->pc = 0x1314E0u;
            goto label_1314e0;
        }
    }
    ctx->pc = 0x1314D8u;
    // 0x1314d8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1314d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1314dc: 0x0  nop
    ctx->pc = 0x1314dcu;
    // NOP
label_1314e0:
    // 0x1314e0: 0x92060019  lbu         $a2, 0x19($s0)
    ctx->pc = 0x1314e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x1314e4: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x1314e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1314e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1314E8u;
    {
        const bool branch_taken_0x1314e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314E8u;
        // 0x1314ec: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314e8) {
            ctx->pc = 0x1314F8u;
            goto label_1314f8;
        }
    }
    ctx->pc = 0x1314F0u;
    // 0x1314f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1314F0u;
    {
        const bool branch_taken_0x1314f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314F0u;
        // 0x1314f4: 0x852025  or          $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314f0) {
            ctx->pc = 0x131510u;
            goto label_131510;
        }
    }
    ctx->pc = 0x1314F8u;
label_1314f8:
    // 0x1314f8: 0x25050080  addiu       $a1, $t0, 0x80
    ctx->pc = 0x1314f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x1314fc: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x1314fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x131500: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x131500u;
    {
        const bool branch_taken_0x131500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x131504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131500u;
        // 0x131504: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131500) {
            ctx->pc = 0x131510u;
            goto label_131510;
        }
    }
    ctx->pc = 0x131508u;
    // 0x131508: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x131508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x13150c: 0x0  nop
    ctx->pc = 0x13150cu;
    // NOP
label_131510:
    // 0x131510: 0x9206001a  lbu         $a2, 0x1A($s0)
    ctx->pc = 0x131510u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x131514: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x131514u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x131518: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x131518u;
    {
        const bool branch_taken_0x131518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131518u;
        // 0x13151c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131518) {
            ctx->pc = 0x131528u;
            goto label_131528;
        }
    }
    ctx->pc = 0x131520u;
    // 0x131520: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x131520u;
    {
        const bool branch_taken_0x131520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131520u;
        // 0x131524: 0x852025  or          $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131520) {
            ctx->pc = 0x131540u;
            goto label_131540;
        }
    }
    ctx->pc = 0x131528u;
label_131528:
    // 0x131528: 0x25050080  addiu       $a1, $t0, 0x80
    ctx->pc = 0x131528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x13152c: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x13152cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x131530: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x131530u;
    {
        const bool branch_taken_0x131530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x131534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131530u;
        // 0x131534: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131530) {
            ctx->pc = 0x131540u;
            goto label_131540;
        }
    }
    ctx->pc = 0x131538u;
    // 0x131538: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x131538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x13153c: 0x0  nop
    ctx->pc = 0x13153cu;
    // NOP
label_131540:
    // 0x131540: 0x9206001b  lbu         $a2, 0x1B($s0)
    ctx->pc = 0x131540u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
    // 0x131544: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x131544u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x131548: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x131548u;
    {
        const bool branch_taken_0x131548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131548u;
        // 0x13154c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131548) {
            ctx->pc = 0x131558u;
            goto label_131558;
        }
    }
    ctx->pc = 0x131550u;
    // 0x131550: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x131550u;
    {
        const bool branch_taken_0x131550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131550u;
        // 0x131554: 0x852025  or          $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131550) {
            ctx->pc = 0x131588u;
            goto label_131588;
        }
    }
    ctx->pc = 0x131558u;
label_131558:
    // 0x131558: 0x25050080  addiu       $a1, $t0, 0x80
    ctx->pc = 0x131558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x13155c: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x13155cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x131560: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x131560u;
    {
        const bool branch_taken_0x131560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x131564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131560u;
        // 0x131564: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131560) {
            ctx->pc = 0x131588u;
            goto label_131588;
        }
    }
    ctx->pc = 0x131568u;
    // 0x131568: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x131568u;
    {
        const bool branch_taken_0x131568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131568u;
        // 0x13156c: 0x852025  or          $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131568) {
            ctx->pc = 0x131588u;
            goto label_131588;
        }
    }
    ctx->pc = 0x131570u;
label_131570:
    // 0x131570: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x131570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x131574: 0xa2050018  sb          $a1, 0x18($s0)
    ctx->pc = 0x131574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x131578: 0xa2050019  sb          $a1, 0x19($s0)
    ctx->pc = 0x131578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 5));
    // 0x13157c: 0xa205001a  sb          $a1, 0x1A($s0)
    ctx->pc = 0x13157cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 5));
    // 0x131580: 0xa205001b  sb          $a1, 0x1B($s0)
    ctx->pc = 0x131580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 5));
    // 0x131584: 0x0  nop
    ctx->pc = 0x131584u;
    // NOP
label_131588:
    // 0x131588: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x131588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13158c: 0x30a50004  andi        $a1, $a1, 0x4
    ctx->pc = 0x13158cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x131590: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x131590u;
    {
        const bool branch_taken_0x131590 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x131590) {
            ctx->pc = 0x131610u;
            goto label_131610;
        }
    }
    ctx->pc = 0x131598u;
    // 0x131598: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x131598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13159c: 0x30a50004  andi        $a1, $a1, 0x4
    ctx->pc = 0x13159cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x1315a0: 0x14a0001b  bnez        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1315A0u;
    {
        const bool branch_taken_0x1315a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1315a0) {
            ctx->pc = 0x131610u;
            goto label_131610;
        }
    }
    ctx->pc = 0x1315A8u;
    // 0x1315a8: 0x9205002e  lbu         $a1, 0x2E($s0)
    ctx->pc = 0x1315a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x1315ac: 0xa205001c  sb          $a1, 0x1C($s0)
    ctx->pc = 0x1315acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 5));
    // 0x1315b0: 0x9205002f  lbu         $a1, 0x2F($s0)
    ctx->pc = 0x1315b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x1315b4: 0xa205001d  sb          $a1, 0x1D($s0)
    ctx->pc = 0x1315b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 5));
    // 0x1315b8: 0x92050030  lbu         $a1, 0x30($s0)
    ctx->pc = 0x1315b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1315bc: 0xa205001e  sb          $a1, 0x1E($s0)
    ctx->pc = 0x1315bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 5));
    // 0x1315c0: 0x92050031  lbu         $a1, 0x31($s0)
    ctx->pc = 0x1315c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x1315c4: 0xa205001f  sb          $a1, 0x1F($s0)
    ctx->pc = 0x1315c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 5));
    // 0x1315c8: 0x92050032  lbu         $a1, 0x32($s0)
    ctx->pc = 0x1315c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1315cc: 0xa2050020  sb          $a1, 0x20($s0)
    ctx->pc = 0x1315ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1315d0: 0x92050033  lbu         $a1, 0x33($s0)
    ctx->pc = 0x1315d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
    // 0x1315d4: 0xa2050021  sb          $a1, 0x21($s0)
    ctx->pc = 0x1315d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 5));
    // 0x1315d8: 0x92050034  lbu         $a1, 0x34($s0)
    ctx->pc = 0x1315d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1315dc: 0xa2050022  sb          $a1, 0x22($s0)
    ctx->pc = 0x1315dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 5));
    // 0x1315e0: 0x92050035  lbu         $a1, 0x35($s0)
    ctx->pc = 0x1315e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x1315e4: 0xa2050023  sb          $a1, 0x23($s0)
    ctx->pc = 0x1315e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 5));
    // 0x1315e8: 0x92050036  lbu         $a1, 0x36($s0)
    ctx->pc = 0x1315e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x1315ec: 0xa2050024  sb          $a1, 0x24($s0)
    ctx->pc = 0x1315ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 5));
    // 0x1315f0: 0x92050037  lbu         $a1, 0x37($s0)
    ctx->pc = 0x1315f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 55)));
    // 0x1315f4: 0xa2050025  sb          $a1, 0x25($s0)
    ctx->pc = 0x1315f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 5));
    // 0x1315f8: 0x92050038  lbu         $a1, 0x38($s0)
    ctx->pc = 0x1315f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1315fc: 0xa2050026  sb          $a1, 0x26($s0)
    ctx->pc = 0x1315fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 5));
    // 0x131600: 0x92050039  lbu         $a1, 0x39($s0)
    ctx->pc = 0x131600u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x131604: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x131604u;
    {
        const bool branch_taken_0x131604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131604u;
        // 0x131608: 0xa2050027  sb          $a1, 0x27($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131604) {
            ctx->pc = 0x131640u;
            goto label_131640;
        }
    }
    ctx->pc = 0x13160Cu;
    // 0x13160c: 0x0  nop
    ctx->pc = 0x13160cu;
    // NOP
label_131610:
    // 0x131610: 0xa200001c  sb          $zero, 0x1C($s0)
    ctx->pc = 0x131610u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x131614: 0xa200001d  sb          $zero, 0x1D($s0)
    ctx->pc = 0x131614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x131618: 0xa200001e  sb          $zero, 0x1E($s0)
    ctx->pc = 0x131618u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x13161c: 0xa200001f  sb          $zero, 0x1F($s0)
    ctx->pc = 0x13161cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x131620: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x131620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x131624: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x131624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x131628: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x131628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x13162c: 0xa2000023  sb          $zero, 0x23($s0)
    ctx->pc = 0x13162cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x131630: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x131630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x131634: 0xa2000025  sb          $zero, 0x25($s0)
    ctx->pc = 0x131634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x131638: 0xa2000026  sb          $zero, 0x26($s0)
    ctx->pc = 0x131638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x13163c: 0xa2000027  sb          $zero, 0x27($s0)
    ctx->pc = 0x13163cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 0));
label_131640:
    // 0x131640: 0x602827  not         $a1, $v1
    ctx->pc = 0x131640u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x131644: 0xa43024  and         $a2, $a1, $a0
    ctx->pc = 0x131644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x131648: 0x802827  not         $a1, $a0
    ctx->pc = 0x131648u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x13164c: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x13164cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x131650: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x131650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x131654: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x131654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x131658: 0x642826  xor         $a1, $v1, $a0
    ctx->pc = 0x131658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x13165c: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x13165cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x131660: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x131660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x131664: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x131664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_131668:
    // 0x131668: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x131668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13166c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13166cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131678: 0x3e00008  jr          $ra
    ctx->pc = 0x131678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131678u;
        // 0x13167c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131680u;
}
