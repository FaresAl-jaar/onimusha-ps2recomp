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

// Function: sub_00119E60
// Address: 0x119e60 - 0x119f50
void sub_00119E60_0x119e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119E60_0x119e60");
#endif

    switch (ctx->pc) {
        case 0x119ed0u: goto label_119ed0;
        case 0x119f14u: goto label_119f14;
        case 0x119f1cu: goto label_119f1c;
        default: break;
    }

    ctx->pc = 0x119e60u;

    // 0x119e60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x119e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x119e64: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x119e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x119e68: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x119e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x119e6c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x119e6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e70: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x119e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x119e74: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x119e74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x119e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x119e7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x119e7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119e84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119e88: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x119E88u;
    {
        const bool branch_taken_0x119e88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x119E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E88u;
        // 0x119e8c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e88) {
            ctx->pc = 0x119E9Cu;
            goto label_119e9c;
        }
    }
    ctx->pc = 0x119E90u;
    // 0x119e90: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119e94: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x119E94u;
    {
        const bool branch_taken_0x119e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E94u;
        // 0x119e98: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e94) {
            ctx->pc = 0x119F2Cu;
            goto label_119f2c;
        }
    }
    ctx->pc = 0x119E9Cu;
label_119e9c:
    // 0x119e9c: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x119e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
    // 0x119ea0: 0x8e503f40  lw          $s0, 0x3F40($s2)
    ctx->pc = 0x119ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x693F40u));
    // 0x119ea4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119EA4u;
    {
        const bool branch_taken_0x119ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x119ea4) {
            ctx->pc = 0x119EB4u;
            goto label_119eb4;
        }
    }
    ctx->pc = 0x119EACu;
    // 0x119eac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x119eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x119eb0: 0xae423f40  sw          $v0, 0x3F40($s2)
    ctx->pc = 0x119eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16192), GPR_U32(ctx, 2));
label_119eb4:
    // 0x119eb4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119EB4u;
    {
        const bool branch_taken_0x119eb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x119eb4) {
            ctx->pc = 0x119EC8u;
            goto label_119ec8;
        }
    }
    ctx->pc = 0x119EBCu;
    // 0x119ebc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119ec0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x119EC0u;
    {
        const bool branch_taken_0x119ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EC0u;
        // 0x119ec4: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ec0) {
            ctx->pc = 0x119F2Cu;
            goto label_119f2c;
        }
    }
    ctx->pc = 0x119EC8u;
label_119ec8:
    // 0x119ec8: 0xc0464b2  jal         func_1192C8
    ctx->pc = 0x119EC8u;
    SET_GPR_U32(ctx, 31, 0x119ED0u);
    ctx->pc = 0x1192C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1192C8u, 0x119EC8u, 0x119ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119ED0u;
label_119ed0:
    // 0x119ed0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ed4: 0x6230007  bgezl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x119ED4u;
    {
        const bool branch_taken_0x119ed4 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x119ed4) {
            ctx->pc = 0x119ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119ED4u;
            // 0x119ed8: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119EF4u;
            goto label_119ef4;
        }
    }
    ctx->pc = 0x119EDCu;
    // 0x119edc: 0x8e433f40  lw          $v1, 0x3F40($s2)
    ctx->pc = 0x119edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16192)));
    // 0x119ee0: 0xae503f40  sw          $s0, 0x3F40($s2)
    ctx->pc = 0x119ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16192), GPR_U32(ctx, 16));
    // 0x119ee4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x119ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x119ee8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x119ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x119eec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x119EECu;
    {
        const bool branch_taken_0x119eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EECu;
        // 0x119ef0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119eec) {
            ctx->pc = 0x119F30u;
            goto label_119f30;
        }
    }
    ctx->pc = 0x119EF4u;
label_119ef4:
    // 0x119ef4: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x119ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x119ef8: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x119ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x119efc: 0x24c69cd0  addiu       $a2, $a2, -0x6330
    ctx->pc = 0x119efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941904));
    // 0x119f00: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x119f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x119f04: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x119f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f0c: 0xc046658  jal         func_119960
    ctx->pc = 0x119F0Cu;
    SET_GPR_U32(ctx, 31, 0x119F14u);
    ctx->pc = 0x119F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F0Cu;
    // 0x119f10: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119960u, 0x119F0Cu, 0x119F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F14u;
label_119f14:
    // 0x119f14: 0xc046548  jal         func_119520
    ctx->pc = 0x119F14u;
    SET_GPR_U32(ctx, 31, 0x119F1Cu);
    ctx->pc = 0x119F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F14u;
    // 0x119f18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119520u, 0x119F14u, 0x119F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F1Cu;
label_119f1c:
    // 0x119f1c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x119f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x119f20: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x119f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x119f24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x119f28: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x119f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_119f2c:
    // 0x119f2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x119f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_119f30:
    // 0x119f30: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x119f30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119f34: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x119f34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119f38: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119f38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119f3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119f40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119f48: 0x3e00008  jr          $ra
    ctx->pc = 0x119F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F48u;
        // 0x119f4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119F50u;
}
