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

// Function: sub_002A0430
// Address: 0x2a0430 - 0x2a0540
void sub_002A0430_0x2a0430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0430_0x2a0430");
#endif

    switch (ctx->pc) {
        case 0x2a04a8u: goto label_2a04a8;
        case 0x2a04e8u: goto label_2a04e8;
        default: break;
    }

    ctx->pc = 0x2a0430u;

    // 0x2a0430: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a0430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a0434: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2a0434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a0438: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a0438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2a043c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2a043cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a0440: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a0440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2a0444: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x2a0444u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a0448: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a0448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2a044c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a044cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a0450: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a0450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a0454: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a0454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a0458: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a0458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a045c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2a045cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0460: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a0460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a0464: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a0464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a0468: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a0468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a046c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a046cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a0470: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a0474: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a0478: 0x8c87007c  lw          $a3, 0x7C($a0)
    ctx->pc = 0x2a0478u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a047c: 0x8c840078  lw          $a0, 0x78($a0)
    ctx->pc = 0x2a047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2a0480: 0xe8a821  addu        $s5, $a3, $t0
    ctx->pc = 0x2a0480u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2a0484: 0x8eb7000c  lw          $s7, 0xC($s5)
    ctx->pc = 0x2a0484u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2a0488: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a0488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a048c: 0x90720034  lbu         $s2, 0x34($v1)
    ctx->pc = 0x2a048cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a0490: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2a0490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2a0494: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A0494u;
    {
        const bool branch_taken_0x2a0494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0494u;
        // 0x2a0498: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0494) {
            ctx->pc = 0x2A0510u;
            goto label_2a0510;
        }
    }
    ctx->pc = 0x2A049Cu;
    // 0x2a049c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2a049cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a04a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04a4: 0x0  nop
    ctx->pc = 0x2a04a4u;
    // NOP
label_2a04a8:
    // 0x2a04a8: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2a04a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a04ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a04acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a04b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2a04b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a04b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a04b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a04b8: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x2a04b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2a04bc: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2a04bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a04c0: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x2a04c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x2a04c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a04c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a04c8: 0x8ec4008c  lw          $a0, 0x8C($s6)
    ctx->pc = 0x2a04c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x2a04cc: 0xde850010  ld          $a1, 0x10($s4)
    ctx->pc = 0x2a04ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2a04d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a04d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a04d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a04d8: 0xa38824  and         $s1, $a1, $v1
    ctx->pc = 0x2a04d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2a04dc: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x2a04dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2a04e0: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x2A04E0u;
    SET_GPR_U32(ctx, 31, 0x2A04E8u);
    ctx->pc = 0x2A04E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A04E0u;
    // 0x2a04e4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x2A04E0u, 0x2A04E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04E8u;
label_2a04e8:
    // 0x2a04e8: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x2a04e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2a04ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a04ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a04f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a04f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a04f4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2a04f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a04f8: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x2a04f8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x2a04fc: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x2a04fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0500: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x2a0500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x2a0504: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x2a0504u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2a0508: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2A0508u;
    {
        const bool branch_taken_0x2a0508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0508u;
        // 0x2a050c: 0xfe840010  sd          $a0, 0x10($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0508) {
            ctx->pc = 0x2A04A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a04a8;
        }
    }
    ctx->pc = 0x2A0510u;
label_2a0510:
    // 0x2a0510: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a0510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a0514: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a0514u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a0518: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a0518u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a051c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a051cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0520: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a0520u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0524: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a0524u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0528: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a0528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a052c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a052cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0538: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0538u;
        // 0x2a053c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0540u;
}
