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

// Function: sub_00166510
// Address: 0x166510 - 0x166810
void sub_00166510_0x166510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166510_0x166510");
#endif

    switch (ctx->pc) {
        case 0x1665d8u: goto label_1665d8;
        case 0x166624u: goto label_166624;
        case 0x166644u: goto label_166644;
        case 0x16665cu: goto label_16665c;
        case 0x166674u: goto label_166674;
        case 0x166694u: goto label_166694;
        case 0x1666b4u: goto label_1666b4;
        case 0x1666ccu: goto label_1666cc;
        case 0x1666ecu: goto label_1666ec;
        case 0x16670cu: goto label_16670c;
        case 0x166724u: goto label_166724;
        case 0x16673cu: goto label_16673c;
        case 0x16675cu: goto label_16675c;
        case 0x16677cu: goto label_16677c;
        case 0x166794u: goto label_166794;
        case 0x1667b4u: goto label_1667b4;
        case 0x1667d4u: goto label_1667d4;
        case 0x1667ecu: goto label_1667ec;
        default: break;
    }

    ctx->pc = 0x166510u;

    // 0x166510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x166514: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x166514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x166518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16651c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16651cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166524: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x166524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x166528: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x166528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x16652c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16652Cu;
    {
        const bool branch_taken_0x16652c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x166530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16652Cu;
        // 0x166530: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16652c) {
            ctx->pc = 0x166540u;
            goto label_166540;
        }
    }
    ctx->pc = 0x166534u;
    // 0x166534: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x166534u;
    {
        const bool branch_taken_0x166534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166534u;
        // 0x166538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166534) {
            ctx->pc = 0x1667F8u;
            goto label_1667f8;
        }
    }
    ctx->pc = 0x16653Cu;
    // 0x16653c: 0x0  nop
    ctx->pc = 0x16653cu;
    // NOP
label_166540:
    // 0x166540: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x166540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x166544: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x166544u;
    {
        const bool branch_taken_0x166544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166544u;
        // 0x166548: 0x64020020  daddiu      $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166544) {
            ctx->pc = 0x166558u;
            goto label_166558;
        }
    }
    ctx->pc = 0x16654Cu;
    // 0x16654c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16654Cu;
    {
        const bool branch_taken_0x16654c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16654c) {
            ctx->pc = 0x166578u;
            goto label_166578;
        }
    }
    ctx->pc = 0x166554u;
    // 0x166554: 0x0  nop
    ctx->pc = 0x166554u;
    // NOP
label_166558:
    // 0x166558: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x166558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x16655c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16655Cu;
    {
        const bool branch_taken_0x16655c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16655Cu;
        // 0x166560: 0x64020010  daddiu      $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16655c) {
            ctx->pc = 0x166570u;
            goto label_166570;
        }
    }
    ctx->pc = 0x166564u;
    // 0x166564: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x166564u;
    {
        const bool branch_taken_0x166564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166564) {
            ctx->pc = 0x166578u;
            goto label_166578;
        }
    }
    ctx->pc = 0x16656Cu;
    // 0x16656c: 0x0  nop
    ctx->pc = 0x16656cu;
    // NOP
label_166570:
    // 0x166570: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166574: 0x0  nop
    ctx->pc = 0x166574u;
    // NOP
label_166578:
    // 0x166578: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x166578u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16657c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x16657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x166580: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x166580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x166584: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x166584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x166588: 0x92490001  lbu         $t1, 0x1($s2)
    ctx->pc = 0x166588u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x16658c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x16658cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x166590: 0x92480000  lbu         $t0, 0x0($s2)
    ctx->pc = 0x166590u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x166594: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x166594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x166598: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x166598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x16659c: 0x23638  dsll        $a2, $v0, 24
    ctx->pc = 0x16659cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 24);
    // 0x1665a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1665a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1665a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1665a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1665a8: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x1665a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x1665ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1665acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1665b0: 0x24846690  addiu       $a0, $a0, 0x6690
    ctx->pc = 0x1665b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    // 0x1665b4: 0x92a38  dsll        $a1, $t1, 8
    ctx->pc = 0x1665b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) << 8);
    // 0x1665b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1665b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1665bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1665bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1665c0: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x1665c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x1665c4: 0xa71825  or          $v1, $a1, $a3
    ctx->pc = 0x1665c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1665c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1665c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1665cc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1665ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1665d0: 0xc05db84  jal         func_176E10
    ctx->pc = 0x1665D0u;
    SET_GPR_U32(ctx, 31, 0x1665D8u);
    ctx->pc = 0x1665D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665D0u;
    // 0x1665d4: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176E10u, 0x1665D0u, 0x1665D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665D8u;
label_1665d8:
    // 0x1665d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1665D8u;
    {
        const bool branch_taken_0x1665d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1665DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665D8u;
        // 0x1665dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665d8) {
            ctx->pc = 0x1665E8u;
            goto label_1665e8;
        }
    }
    ctx->pc = 0x1665E0u;
    // 0x1665e0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1665E0u;
    {
        const bool branch_taken_0x1665e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1665E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665E0u;
        // 0x1665e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665e0) {
            ctx->pc = 0x1667F8u;
            goto label_1667f8;
        }
    }
    ctx->pc = 0x1665E8u;
label_1665e8:
    // 0x1665e8: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x1665e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1665ec: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1665ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1665f0: 0x1020007f  beqz        $at, . + 4 + (0x7F << 2)
    ctx->pc = 0x1665F0u;
    {
        const bool branch_taken_0x1665f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1665F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665F0u;
        // 0x1665f4: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665f0) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x1665F8u;
    // 0x1665f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1665f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1665fc: 0x24635260  addiu       $v1, $v1, 0x5260
    ctx->pc = 0x1665fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21088));
    // 0x166600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x166600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166604: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x166604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166608: 0x400008  jr          $v0
    ctx->pc = 0x166608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166610u: goto label_166610;
            case 0x166668u: goto label_166668;
            case 0x166680u: goto label_166680;
            case 0x1666D8u: goto label_1666d8;
            case 0x166730u: goto label_166730;
            case 0x166748u: goto label_166748;
            case 0x1667A0u: goto label_1667a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166608u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x166610u;
label_166610:
    // 0x166610: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x166610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x166614: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x166614u;
    {
        const bool branch_taken_0x166614 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x166618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166614u;
        // 0x166618: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166614) {
            ctx->pc = 0x166630u;
            goto label_166630;
        }
    }
    ctx->pc = 0x16661Cu;
    // 0x16661c: 0xc0588a8  jal         func_1622A0
    ctx->pc = 0x16661Cu;
    SET_GPR_U32(ctx, 31, 0x166624u);
    ctx->pc = 0x166620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16661Cu;
    // 0x166620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1622A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1622A0u, 0x16661Cu, 0x166624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166624u;
label_166624:
    // 0x166624: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x166624u;
    {
        const bool branch_taken_0x166624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166624) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x16662Cu;
    // 0x16662c: 0x0  nop
    ctx->pc = 0x16662cu;
    // NOP
label_166630:
    // 0x166630: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x166630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x166634: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x166634u;
    {
        const bool branch_taken_0x166634 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x166638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166634u;
        // 0x166638: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166634) {
            ctx->pc = 0x166650u;
            goto label_166650;
        }
    }
    ctx->pc = 0x16663Cu;
    // 0x16663c: 0xc057b5c  jal         func_15ED70
    ctx->pc = 0x16663Cu;
    SET_GPR_U32(ctx, 31, 0x166644u);
    ctx->pc = 0x166640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16663Cu;
    // 0x166640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED70u, 0x16663Cu, 0x166644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166644u;
label_166644:
    // 0x166644: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x166644u;
    {
        const bool branch_taken_0x166644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166644) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x16664Cu;
    // 0x16664c: 0x0  nop
    ctx->pc = 0x16664cu;
    // NOP
label_166650:
    // 0x166650: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x166650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166654: 0xc056e10  jal         func_15B840
    ctx->pc = 0x166654u;
    SET_GPR_U32(ctx, 31, 0x16665Cu);
    ctx->pc = 0x166658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166654u;
    // 0x166658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B840u, 0x166654u, 0x16665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16665Cu;
label_16665c:
    // 0x16665c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x16665Cu;
    {
        const bool branch_taken_0x16665c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16665c) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x166664u;
    // 0x166664: 0x0  nop
    ctx->pc = 0x166664u;
    // NOP
label_166668:
    // 0x166668: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x166668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16666c: 0xc0596ac  jal         func_165AB0
    ctx->pc = 0x16666Cu;
    SET_GPR_U32(ctx, 31, 0x166674u);
    ctx->pc = 0x166670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16666Cu;
    // 0x166670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165AB0u, 0x16666Cu, 0x166674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166674u;
label_166674:
    // 0x166674: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x166674u;
    {
        const bool branch_taken_0x166674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166674) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x16667Cu;
    // 0x16667c: 0x0  nop
    ctx->pc = 0x16667cu;
    // NOP
label_166680:
    // 0x166680: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x166680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x166684: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x166684u;
    {
        const bool branch_taken_0x166684 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x166688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166684u;
        // 0x166688: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166684) {
            ctx->pc = 0x1666A0u;
            goto label_1666a0;
        }
    }
    ctx->pc = 0x16668Cu;
    // 0x16668c: 0xc058ca4  jal         func_163290
    ctx->pc = 0x16668Cu;
    SET_GPR_U32(ctx, 31, 0x166694u);
    ctx->pc = 0x166690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16668Cu;
    // 0x166690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163290u, 0x16668Cu, 0x166694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166694u;
label_166694:
    // 0x166694: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x166694u;
    {
        const bool branch_taken_0x166694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166694) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x16669Cu;
    // 0x16669c: 0x0  nop
    ctx->pc = 0x16669cu;
    // NOP
label_1666a0:
    // 0x1666a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1666a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1666a4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1666A4u;
    {
        const bool branch_taken_0x1666a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1666A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666A4u;
        // 0x1666a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666a4) {
            ctx->pc = 0x1666C0u;
            goto label_1666c0;
        }
    }
    ctx->pc = 0x1666ACu;
    // 0x1666ac: 0xc057f58  jal         func_15FD60
    ctx->pc = 0x1666ACu;
    SET_GPR_U32(ctx, 31, 0x1666B4u);
    ctx->pc = 0x1666B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1666ACu;
    // 0x1666b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FD60u, 0x1666ACu, 0x1666B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1666B4u;
label_1666b4:
    // 0x1666b4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1666B4u;
    {
        const bool branch_taken_0x1666b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1666b4) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x1666BCu;
    // 0x1666bc: 0x0  nop
    ctx->pc = 0x1666bcu;
    // NOP
label_1666c0:
    // 0x1666c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1666c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1666c4: 0xc05720c  jal         func_15C830
    ctx->pc = 0x1666C4u;
    SET_GPR_U32(ctx, 31, 0x1666CCu);
    ctx->pc = 0x1666C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1666C4u;
    // 0x1666c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C830u, 0x1666C4u, 0x1666CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1666CCu;
label_1666cc:
    // 0x1666cc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1666CCu;
    {
        const bool branch_taken_0x1666cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1666cc) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x1666D4u;
    // 0x1666d4: 0x0  nop
    ctx->pc = 0x1666d4u;
    // NOP
label_1666d8:
    // 0x1666d8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1666d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1666dc: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1666DCu;
    {
        const bool branch_taken_0x1666dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1666E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666DCu;
        // 0x1666e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666dc) {
            ctx->pc = 0x1666F8u;
            goto label_1666f8;
        }
    }
    ctx->pc = 0x1666E4u;
    // 0x1666e4: 0xc058f24  jal         func_163C90
    ctx->pc = 0x1666E4u;
    SET_GPR_U32(ctx, 31, 0x1666ECu);
    ctx->pc = 0x1666E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1666E4u;
    // 0x1666e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C90u, 0x1666E4u, 0x1666ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1666ECu;
label_1666ec:
    // 0x1666ec: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1666ECu;
    {
        const bool branch_taken_0x1666ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1666ec) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x1666F4u;
    // 0x1666f4: 0x0  nop
    ctx->pc = 0x1666f4u;
    // NOP
label_1666f8:
    // 0x1666f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1666f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1666fc: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1666FCu;
    {
        const bool branch_taken_0x1666fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x166700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666FCu;
        // 0x166700: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666fc) {
            ctx->pc = 0x166718u;
            goto label_166718;
        }
    }
    ctx->pc = 0x166704u;
    // 0x166704: 0xc0581d8  jal         func_160760
    ctx->pc = 0x166704u;
    SET_GPR_U32(ctx, 31, 0x16670Cu);
    ctx->pc = 0x166708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166704u;
    // 0x166708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160760u, 0x166704u, 0x16670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16670Cu;
label_16670c:
    // 0x16670c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x16670Cu;
    {
        const bool branch_taken_0x16670c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16670c) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x166714u;
    // 0x166714: 0x0  nop
    ctx->pc = 0x166714u;
    // NOP
label_166718:
    // 0x166718: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x166718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16671c: 0xc05748c  jal         func_15D230
    ctx->pc = 0x16671Cu;
    SET_GPR_U32(ctx, 31, 0x166724u);
    ctx->pc = 0x166720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16671Cu;
    // 0x166720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D230u, 0x16671Cu, 0x166724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166724u;
label_166724:
    // 0x166724: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x166724u;
    {
        const bool branch_taken_0x166724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166724) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x16672Cu;
    // 0x16672c: 0x0  nop
    ctx->pc = 0x16672cu;
    // NOP
label_166730:
    // 0x166730: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x166730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166734: 0xc05977c  jal         func_165DF0
    ctx->pc = 0x166734u;
    SET_GPR_U32(ctx, 31, 0x16673Cu);
    ctx->pc = 0x166738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166734u;
    // 0x166738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165DF0u, 0x166734u, 0x16673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16673Cu;
label_16673c:
    // 0x16673c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x16673Cu;
    {
        const bool branch_taken_0x16673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16673c) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x166744u;
    // 0x166744: 0x0  nop
    ctx->pc = 0x166744u;
    // NOP
label_166748:
    // 0x166748: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x166748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x16674c: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16674Cu;
    {
        const bool branch_taken_0x16674c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x166750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16674Cu;
        // 0x166750: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16674c) {
            ctx->pc = 0x166768u;
            goto label_166768;
        }
    }
    ctx->pc = 0x166754u;
    // 0x166754: 0xc058d7c  jal         func_1635F0
    ctx->pc = 0x166754u;
    SET_GPR_U32(ctx, 31, 0x16675Cu);
    ctx->pc = 0x166758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166754u;
    // 0x166758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1635F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1635F0u, 0x166754u, 0x16675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16675Cu;
label_16675c:
    // 0x16675c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x16675Cu;
    {
        const bool branch_taken_0x16675c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16675c) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x166764u;
    // 0x166764: 0x0  nop
    ctx->pc = 0x166764u;
    // NOP
label_166768:
    // 0x166768: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x166768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16676c: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16676Cu;
    {
        const bool branch_taken_0x16676c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x166770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16676Cu;
        // 0x166770: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16676c) {
            ctx->pc = 0x166788u;
            goto label_166788;
        }
    }
    ctx->pc = 0x166774u;
    // 0x166774: 0xc058030  jal         func_1600C0
    ctx->pc = 0x166774u;
    SET_GPR_U32(ctx, 31, 0x16677Cu);
    ctx->pc = 0x166778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166774u;
    // 0x166778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1600C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1600C0u, 0x166774u, 0x16677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16677Cu;
label_16677c:
    // 0x16677c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x16677Cu;
    {
        const bool branch_taken_0x16677c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16677c) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x166784u;
    // 0x166784: 0x0  nop
    ctx->pc = 0x166784u;
    // NOP
label_166788:
    // 0x166788: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x166788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16678c: 0xc0572e4  jal         func_15CB90
    ctx->pc = 0x16678Cu;
    SET_GPR_U32(ctx, 31, 0x166794u);
    ctx->pc = 0x166790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16678Cu;
    // 0x166790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CB90u, 0x16678Cu, 0x166794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166794u;
label_166794:
    // 0x166794: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x166794u;
    {
        const bool branch_taken_0x166794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166794) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x16679Cu;
    // 0x16679c: 0x0  nop
    ctx->pc = 0x16679cu;
    // NOP
label_1667a0:
    // 0x1667a0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1667a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1667a4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1667A4u;
    {
        const bool branch_taken_0x1667a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1667A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667A4u;
        // 0x1667a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667a4) {
            ctx->pc = 0x1667C0u;
            goto label_1667c0;
        }
    }
    ctx->pc = 0x1667ACu;
    // 0x1667ac: 0xc058f28  jal         func_163CA0
    ctx->pc = 0x1667ACu;
    SET_GPR_U32(ctx, 31, 0x1667B4u);
    ctx->pc = 0x1667B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1667ACu;
    // 0x1667b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163CA0u, 0x1667ACu, 0x1667B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1667B4u;
label_1667b4:
    // 0x1667b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1667B4u;
    {
        const bool branch_taken_0x1667b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1667b4) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x1667BCu;
    // 0x1667bc: 0x0  nop
    ctx->pc = 0x1667bcu;
    // NOP
label_1667c0:
    // 0x1667c0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1667c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1667c4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1667C4u;
    {
        const bool branch_taken_0x1667c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1667C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667C4u;
        // 0x1667c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667c4) {
            ctx->pc = 0x1667E0u;
            goto label_1667e0;
        }
    }
    ctx->pc = 0x1667CCu;
    // 0x1667cc: 0xc0581dc  jal         func_160770
    ctx->pc = 0x1667CCu;
    SET_GPR_U32(ctx, 31, 0x1667D4u);
    ctx->pc = 0x1667D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1667CCu;
    // 0x1667d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160770u, 0x1667CCu, 0x1667D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1667D4u;
label_1667d4:
    // 0x1667d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1667D4u;
    {
        const bool branch_taken_0x1667d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1667d4) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x1667DCu;
    // 0x1667dc: 0x0  nop
    ctx->pc = 0x1667dcu;
    // NOP
label_1667e0:
    // 0x1667e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1667e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667e4: 0xc057490  jal         func_15D240
    ctx->pc = 0x1667E4u;
    SET_GPR_U32(ctx, 31, 0x1667ECu);
    ctx->pc = 0x1667E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1667E4u;
    // 0x1667e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D240u, 0x1667E4u, 0x1667ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1667ECu;
label_1667ec:
    // 0x1667ec: 0x0  nop
    ctx->pc = 0x1667ecu;
    // NOP
label_1667f0:
    // 0x1667f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1667f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667f4: 0x0  nop
    ctx->pc = 0x1667f4u;
    // NOP
label_1667f8:
    // 0x1667f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1667f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1667fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1667fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166808: 0x3e00008  jr          $ra
    ctx->pc = 0x166808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166808u;
        // 0x16680c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166810u;
}
