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

// Function: sub_002F30B0
// Address: 0x2f30b0 - 0x2f31b8
void sub_002F30B0_0x2f30b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F30B0_0x2f30b0");
#endif

    switch (ctx->pc) {
        case 0x2f30c8u: goto label_2f30c8;
        case 0x2f3118u: goto label_2f3118;
        case 0x2f3180u: goto label_2f3180;
        default: break;
    }

    ctx->pc = 0x2f30b0u;

    // 0x2f30b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f30b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f30b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2f30b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f30b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f30b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f30bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f30bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f30c0: 0xc0bcc14  jal         func_2F3050
    ctx->pc = 0x2F30C0u;
    SET_GPR_U32(ctx, 31, 0x2F30C8u);
    ctx->pc = 0x2F30C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F30C0u;
    // 0x2f30c4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3050u, 0x2F30C0u, 0x2F30C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F30C8u;
label_2f30c8:
    // 0x2f30c8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2f30c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f30cc: 0x304e00ff  andi        $t6, $v0, 0xFF
    ctx->pc = 0x2f30ccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f30d0: 0x30a20f00  andi        $v0, $a1, 0xF00
    ctx->pc = 0x2f30d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3840);
    // 0x2f30d4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2f30d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f30d8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2f30d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2f30dc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F30DCu;
    {
        const bool branch_taken_0x2f30dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F30E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30DCu;
        // 0x2f30e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30dc) {
            ctx->pc = 0x2F30F0u;
            goto label_2f30f0;
        }
    }
    ctx->pc = 0x2F30E4u;
    // 0x2f30e4: 0x304effff  andi        $t6, $v0, 0xFFFF
    ctx->pc = 0x2f30e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f30e8: 0x6402000e  daddiu      $v0, $zero, 0xE
    ctx->pc = 0x2f30e8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x2f30ec: 0x0  nop
    ctx->pc = 0x2f30ecu;
    // NOP
label_2f30f0:
    // 0x2f30f0: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x2f30f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f30f4: 0xa082a  slt         $at, $zero, $t2
    ctx->pc = 0x2f30f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2f30f8: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x2F30F8u;
    {
        const bool branch_taken_0x2f30f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30F8u;
        // 0x2f30fc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30f8) {
            ctx->pc = 0x2F31A0u;
            goto label_2f31a0;
        }
    }
    ctx->pc = 0x2F3100u;
    // 0x2f3100: 0x29410009  slti        $at, $t2, 0x9
    ctx->pc = 0x2f3100u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f3104: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F3104u;
    {
        const bool branch_taken_0x2f3104 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3104u;
        // 0x2f3108: 0x254bfff8  addiu       $t3, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3104) {
            ctx->pc = 0x2F3168u;
            goto label_2f3168;
        }
    }
    ctx->pc = 0x2F310Cu;
    // 0x2f310c: 0x3c09004f  lui         $t1, 0x4F
    ctx->pc = 0x2f310cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)79 << 16));
    // 0x2f3110: 0x25298f90  addiu       $t1, $t1, -0x7070
    ctx->pc = 0x2f3110u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294938512));
    // 0x2f3114: 0x0  nop
    ctx->pc = 0x2f3114u;
    // NOP
label_2f3118:
    // 0x2f3118: 0x95240006  lhu         $a0, 0x6($t1)
    ctx->pc = 0x2f3118u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x2f311c: 0x95230016  lhu         $v1, 0x16($t1)
    ctx->pc = 0x2f311cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 22)));
    // 0x2f3120: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x2f3120u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x2f3124: 0x95280026  lhu         $t0, 0x26($t1)
    ctx->pc = 0x2f3124u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 38)));
    // 0x2f3128: 0x18b102a  slt         $v0, $t4, $t3
    ctx->pc = 0x2f3128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2f312c: 0x95270036  lhu         $a3, 0x36($t1)
    ctx->pc = 0x2f312cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 54)));
    // 0x2f3130: 0x95260046  lhu         $a2, 0x46($t1)
    ctx->pc = 0x2f3130u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 70)));
    // 0x2f3134: 0x95250056  lhu         $a1, 0x56($t1)
    ctx->pc = 0x2f3134u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 86)));
    // 0x2f3138: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x2f3138u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x2f313c: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x2f313cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2f3140: 0x95240066  lhu         $a0, 0x66($t1)
    ctx->pc = 0x2f3140u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 102)));
    // 0x2f3144: 0x95230076  lhu         $v1, 0x76($t1)
    ctx->pc = 0x2f3144u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 118)));
    // 0x2f3148: 0x1a86821  addu        $t5, $t5, $t0
    ctx->pc = 0x2f3148u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x2f314c: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x2f314cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x2f3150: 0x1a66821  addu        $t5, $t5, $a2
    ctx->pc = 0x2f3150u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x2f3154: 0x1a56821  addu        $t5, $t5, $a1
    ctx->pc = 0x2f3154u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x2f3158: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x2f3158u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x2f315c: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x2f315cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2f3160: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2F3160u;
    {
        const bool branch_taken_0x2f3160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3160u;
        // 0x2f3164: 0x25290080  addiu       $t1, $t1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3160) {
            ctx->pc = 0x2F3118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3118;
        }
    }
    ctx->pc = 0x2F3168u;
label_2f3168:
    // 0x2f3168: 0x18a082a  slt         $at, $t4, $t2
    ctx->pc = 0x2f3168u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2f316c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2F316Cu;
    {
        const bool branch_taken_0x2f316c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F316Cu;
        // 0x2f3170: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f316c) {
            ctx->pc = 0x2F31A0u;
            goto label_2f31a0;
        }
    }
    ctx->pc = 0x2F3174u;
    // 0x2f3174: 0xc1900  sll         $v1, $t4, 4
    ctx->pc = 0x2f3174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x2f3178: 0x24428f90  addiu       $v0, $v0, -0x7070
    ctx->pc = 0x2f3178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938512));
    // 0x2f317c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2f317cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f3180:
    // 0x2f3180: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x2f3180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2f3184: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2f3184u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2f3188: 0x18a102a  slt         $v0, $t4, $t2
    ctx->pc = 0x2f3188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2f318c: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x2f318cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2f3190: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2f3190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2f3194: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F3194u;
    {
        const bool branch_taken_0x2f3194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3194) {
            ctx->pc = 0x2F3180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3180;
        }
    }
    ctx->pc = 0x2F319Cu;
    // 0x2f319c: 0x0  nop
    ctx->pc = 0x2f319cu;
    // NOP
label_2f31a0:
    // 0x2f31a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f31a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f31a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f31a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f31a8: 0x31c2ffff  andi        $v0, $t6, 0xFFFF
    ctx->pc = 0x2f31a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x2f31ac: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x2f31acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2f31b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F31B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31B0u;
        // 0x2f31b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F31B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F31B8u;
}
