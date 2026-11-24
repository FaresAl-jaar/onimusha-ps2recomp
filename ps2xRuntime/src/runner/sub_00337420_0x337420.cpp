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

// Function: sub_00337420
// Address: 0x337420 - 0x337548
void sub_00337420_0x337420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337420_0x337420");
#endif

    switch (ctx->pc) {
        case 0x337458u: goto label_337458;
        case 0x33747cu: goto label_33747c;
        case 0x3374a0u: goto label_3374a0;
        case 0x3374ccu: goto label_3374cc;
        case 0x337524u: goto label_337524;
        default: break;
    }

    ctx->pc = 0x337420u;

    // 0x337420: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x337420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x337424: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x337424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x337428: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x337428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33742c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33742cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x337430: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x337430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x337434: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x337434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33743c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33743cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x337440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337444: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x337444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337448: 0x96650004  lhu         $a1, 0x4($s3)
    ctx->pc = 0x337448u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33744c: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x33744cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x337450: 0xc0bd138  jal         func_2F44E0
    ctx->pc = 0x337450u;
    SET_GPR_U32(ctx, 31, 0x337458u);
    ctx->pc = 0x337454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337450u;
    // 0x337454: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F44E0u, 0x337450u, 0x337458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337458u;
label_337458:
    // 0x337458: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x337458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33745c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33745cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x337460: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x337460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x337464: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x337464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x337468: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x337468u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x33746c: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x33746cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x337470: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x337470u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x337474: 0xc0bd138  jal         func_2F44E0
    ctx->pc = 0x337474u;
    SET_GPR_U32(ctx, 31, 0x33747Cu);
    ctx->pc = 0x337478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337474u;
    // 0x337478: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F44E0u, 0x337474u, 0x33747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33747Cu;
label_33747c:
    // 0x33747c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33747cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337480: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x337480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x337484: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x337484u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x337488: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x337488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x33748c: 0x96650004  lhu         $a1, 0x4($s3)
    ctx->pc = 0x33748cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x337490: 0x92740001  lbu         $s4, 0x1($s3)
    ctx->pc = 0x337490u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x337494: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x337494u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x337498: 0xc0bd168  jal         func_2F45A0
    ctx->pc = 0x337498u;
    SET_GPR_U32(ctx, 31, 0x3374A0u);
    ctx->pc = 0x33749Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337498u;
    // 0x33749c: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45A0u, 0x337498u, 0x3374A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3374A0u;
label_3374a0:
    // 0x3374a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3374a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3374a4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3374a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3374a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3374A8u;
    {
        const bool branch_taken_0x3374a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3374a8) {
            ctx->pc = 0x3374B8u;
            goto label_3374b8;
        }
    }
    ctx->pc = 0x3374B0u;
    // 0x3374b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3374b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3374b4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x3374b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3374b8:
    // 0x3374b8: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x3374b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3374bc: 0x92540001  lbu         $s4, 0x1($s2)
    ctx->pc = 0x3374bcu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3374c0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3374c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3374c4: 0xc0bd168  jal         func_2F45A0
    ctx->pc = 0x3374C4u;
    SET_GPR_U32(ctx, 31, 0x3374CCu);
    ctx->pc = 0x3374C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3374C4u;
    // 0x3374c8: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45A0u, 0x3374C4u, 0x3374CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3374CCu;
label_3374cc:
    // 0x3374cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3374ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3374d0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3374d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3374d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3374D4u;
    {
        const bool branch_taken_0x3374d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3374d4) {
            ctx->pc = 0x3374E8u;
            goto label_3374e8;
        }
    }
    ctx->pc = 0x3374DCu;
    // 0x3374dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3374dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3374e0: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x3374e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3374e4: 0x0  nop
    ctx->pc = 0x3374e4u;
    // NOP
label_3374e8:
    // 0x3374e8: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x3374e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3374ec: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x3374ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3374f0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x3374f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3374f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3374F4u;
    {
        const bool branch_taken_0x3374f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3374f4) {
            ctx->pc = 0x337508u;
            goto label_337508;
        }
    }
    ctx->pc = 0x3374FCu;
    // 0x3374fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3374FCu;
    {
        const bool branch_taken_0x3374fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3374FCu;
        // 0x337500: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3374fc) {
            ctx->pc = 0x337528u;
            goto label_337528;
        }
    }
    ctx->pc = 0x337504u;
    // 0x337504: 0x0  nop
    ctx->pc = 0x337504u;
    // NOP
label_337508:
    // 0x337508: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x337508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33750c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x33750Cu;
    {
        const bool branch_taken_0x33750c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x337510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33750Cu;
        // 0x337510: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33750c) {
            ctx->pc = 0x33751Cu;
            goto label_33751c;
        }
    }
    ctx->pc = 0x337514u;
    // 0x337514: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x337514u;
    {
        const bool branch_taken_0x337514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337514u;
        // 0x337518: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337514) {
            ctx->pc = 0x337524u;
            goto label_337524;
        }
    }
    ctx->pc = 0x33751Cu;
label_33751c:
    // 0x33751c: 0xc0cdc4c  jal         func_337130
    ctx->pc = 0x33751Cu;
    SET_GPR_U32(ctx, 31, 0x337524u);
    ctx->pc = 0x337520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33751Cu;
    // 0x337520: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337130u, 0x33751Cu, 0x337524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337524u;
label_337524:
    // 0x337524: 0x0  nop
    ctx->pc = 0x337524u;
    // NOP
label_337528:
    // 0x337528: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x337528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33752c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33752cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x337530: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x337530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x337534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x337534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33753c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33753cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337540: 0x3e00008  jr          $ra
    ctx->pc = 0x337540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337540u;
        // 0x337544: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337548u;
}
