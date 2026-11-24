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

// Function: sub_0021EAF0
// Address: 0x21eaf0 - 0x21eba4
void sub_0021EAF0_0x21eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EAF0_0x21eaf0");
#endif

    switch (ctx->pc) {
        case 0x21eb2cu: goto label_21eb2c;
        case 0x21eb6cu: goto label_21eb6c;
        default: break;
    }

    ctx->pc = 0x21eaf0u;

    // 0x21eaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21eaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21eaf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21eaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21eaf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21eaf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eafc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21eafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21eb00: 0x261108a0  addiu       $s1, $s0, 0x8A0
    ctx->pc = 0x21eb00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2208));
    // 0x21eb04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21eb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21eb08: 0x26120d0c  addiu       $s2, $s0, 0xD0C
    ctx->pc = 0x21eb08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3340));
    // 0x21eb0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21eb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21eb10: 0x26130ad0  addiu       $s3, $s0, 0xAD0
    ctx->pc = 0x21eb10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 2768));
    // 0x21eb14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21eb18: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x21eb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x21eb1c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x21eb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x21eb20: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x21eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21eb24: 0xc0845a0  jal         func_211680
    ctx->pc = 0x21EB24u;
    SET_GPR_U32(ctx, 31, 0x21EB2Cu);
    ctx->pc = 0x21EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EB24u;
    // 0x21eb28: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211680u, 0x21EB24u, 0x21EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB2Cu;
label_21eb2c:
    // 0x21eb2c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x21eb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x21eb30: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x21eb30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x21eb34: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x21eb34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x21eb38: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x21eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x21eb3c: 0x26040adc  addiu       $a0, $s0, 0xADC
    ctx->pc = 0x21eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2780));
    // 0x21eb40: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x21eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x21eb44: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x21eb44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x21eb48: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x21eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x21eb4c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x21eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x21eb50: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x21eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x21eb54: 0xfe200018  sd          $zero, 0x18($s1)
    ctx->pc = 0x21eb54u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 0));
    // 0x21eb58: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x21eb58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x21eb5c: 0xfe200020  sd          $zero, 0x20($s1)
    ctx->pc = 0x21eb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 0));
    // 0x21eb60: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x21eb60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x21eb64: 0xc08805a  jal         func_220168
    ctx->pc = 0x21EB64u;
    SET_GPR_U32(ctx, 31, 0x21EB6Cu);
    ctx->pc = 0x21EB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EB64u;
    // 0x21eb68: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220168u, 0x21EB64u, 0x21EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB6Cu;
label_21eb6c:
    // 0x21eb6c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x21eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x21eb70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21eb74: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x21eb74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x21eb78: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x21eb78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x21eb7c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x21eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x21eb80: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x21eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x21eb84: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x21eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x21eb88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21eb88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21eb8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21eb8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21eb90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21eb90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21eb94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21eb94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21eb98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21eb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21eb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x21EB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB9Cu;
        // 0x21eba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EBA4u;
}
