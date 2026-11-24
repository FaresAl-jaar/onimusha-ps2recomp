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

// Function: sub_0010BA28
// Address: 0x10ba28 - 0x10baa4
void sub_0010BA28_0x10ba28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BA28_0x10ba28");
#endif

    switch (ctx->pc) {
        case 0x10ba64u: goto label_10ba64;
        default: break;
    }

    ctx->pc = 0x10ba28u;

    // 0x10ba28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ba28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ba2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10ba2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ba30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ba34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ba38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ba38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ba3c: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x10ba3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x10ba40: 0xae000878  sw          $zero, 0x878($s0)
    ctx->pc = 0x10ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2168), GPR_U32(ctx, 0));
    // 0x10ba44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ba44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba48: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10ba48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10ba4c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10ba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10ba50: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10ba50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10ba54: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x10ba54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10ba58: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x10ba58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x10ba5c: 0xc042c08  jal         func_10B020
    ctx->pc = 0x10BA5Cu;
    SET_GPR_U32(ctx, 31, 0x10BA64u);
    ctx->pc = 0x10BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA5Cu;
    // 0x10ba60: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B020u, 0x10BA5Cu, 0x10BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BA64u;
label_10ba64:
    // 0x10ba64: 0xae000858  sw          $zero, 0x858($s0)
    ctx->pc = 0x10ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2136), GPR_U32(ctx, 0));
    // 0x10ba68: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10ba68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10ba6c: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x10ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x10ba70: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x10ba70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x10ba74: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x10ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x10ba78: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x10ba78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x10ba7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x10ba80: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10ba80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x10ba84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ba84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ba88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ba8c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10ba8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10ba90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ba90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ba94: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x10ba94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x10ba98: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x10ba9c: 0x3e00008  jr          $ra
    ctx->pc = 0x10BA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA9Cu;
        // 0x10baa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BAA4u;
}

// sub_0010B948_0x10b948: added with the libmpeg recompile; kept in this file so the unity batches stay the same.
void sub_0010B948_0x10b948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B948_0x10b948");
#endif

    switch (ctx->pc) {
        case 0x10b974u: goto label_10b974;
        default: break;
    }

    ctx->pc = 0x10b948u;

    // 0x10b948: 0x24c30013  addiu       $v1, $a2, 0x13
    ctx->pc = 0x10b948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 19));
    // 0x10b94c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10b94cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10b950: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b958: 0x24c60022  addiu       $a2, $a2, 0x22
    ctx->pc = 0x10b958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 34));
    // 0x10b95c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10b95cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10b960: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x10b960u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x10b964: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x10b964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10b968: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x10b968u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x10b96c: 0xc042bc8  jal         func_10AF20
    ctx->pc = 0x10B96Cu;
    SET_GPR_U32(ctx, 31, 0x10B974u);
    ctx->pc = 0x10B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B96Cu;
    // 0x10b970: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AF20u, 0x10B96Cu, 0x10B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B974u;
label_10b974:
    // 0x10b974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b97c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B97Cu;
        // 0x10b980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B984u;
    // 0x10b984: 0x0  nop
    ctx->pc = 0x10b984u;
    // NOP
    ctx->pc = 0x10b988u;
}

// sub_0010BAA8_0x10baa8: added with the libmpeg recompile; kept in this file so the unity batches stay the same.
void sub_0010BAA8_0x10baa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BAA8_0x10baa8");
#endif

    ctx->pc = 0x10baa8u;

    // 0x10baa8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10baac: 0x3e00008  jr          $ra
    ctx->pc = 0x10BAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAACu;
        // 0x10bab0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BAB4u;
    // 0x10bab4: 0x0  nop
    ctx->pc = 0x10bab4u;
    // NOP
    ctx->pc = 0x10bab8u;
}

// sub_0010BAB8_0x10bab8: added with the libmpeg recompile; kept in this file so the unity batches stay the same.
void sub_0010BAB8_0x10bab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BAB8_0x10bab8");
#endif

    ctx->pc = 0x10bab8u;

    // 0x10bab8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10babc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x10babcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10bac0: 0x3e00008  jr          $ra
    ctx->pc = 0x10BAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAC0u;
        // 0x10bac4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BAC8u;
}

// sub_0010BAC8_0x10bac8: added with the libmpeg recompile; kept in this file so the unity batches stay the same.
void sub_0010BAC8_0x10bac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BAC8_0x10bac8");
#endif

    ctx->pc = 0x10bac8u;

    // 0x10bac8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x10bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10bacc: 0xac4700b0  sw          $a3, 0xB0($v0)
    ctx->pc = 0x10baccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 7));
    // 0x10bad0: 0xac4500a8  sw          $a1, 0xA8($v0)
    ctx->pc = 0x10bad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 5));
    // 0x10bad4: 0x3e00008  jr          $ra
    ctx->pc = 0x10BAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAD4u;
        // 0x10bad8: 0xac4600ac  sw          $a2, 0xAC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BADCu;
    // 0x10badc: 0x0  nop
    ctx->pc = 0x10badcu;
    // NOP
    ctx->pc = 0x10bae0u;
}

// sub_0010BAE0_0x10bae0: added with the libmpeg recompile; kept in this file so the unity batches stay the same.
void sub_0010BAE0_0x10bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BAE0_0x10bae0");
#endif

    ctx->pc = 0x10bae0u;

    // 0x10bae0: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x10bae0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10bae4: 0x8d0200a8  lw          $v0, 0xA8($t0)
    ctx->pc = 0x10bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 168)));
    // 0x10bae8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x10baec: 0x8d0300ac  lw          $v1, 0xAC($t0)
    ctx->pc = 0x10baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 172)));
    // 0x10baf0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x10baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x10baf4: 0x8d0200b0  lw          $v0, 0xB0($t0)
    ctx->pc = 0x10baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x10baf8: 0x3e00008  jr          $ra
    ctx->pc = 0x10BAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAF8u;
        // 0x10bafc: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BB00u;
}
