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

// Function: sub_00288EC0
// Address: 0x288ec0 - 0x288f8c
void sub_00288EC0_0x288ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288EC0_0x288ec0");
#endif

    switch (ctx->pc) {
        case 0x288f00u: goto label_288f00;
        case 0x288f10u: goto label_288f10;
        default: break;
    }

    ctx->pc = 0x288ec0u;

    // 0x288ec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x288ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x288ec4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x288ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x288ec8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x288ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x288ecc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x288eccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x288ed0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x288ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x288ed4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x288ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x288ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x288ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x288edc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x288edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x288ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x288ee4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x288ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ee8: 0x848300c2  lh          $v1, 0xC2($a0)
    ctx->pc = 0x288ee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x288eec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x288eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ef0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x288ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x288ef4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x288ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x288ef8: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x288EF8u;
    SET_GPR_U32(ctx, 31, 0x288F00u);
    ctx->pc = 0x288EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288EF8u;
    // 0x288efc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x288EF8u, 0x288F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F00u;
label_288f00:
    // 0x288f00: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x288f00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x288f04: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x288f04u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x288f08: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x288F08u;
    SET_GPR_U32(ctx, 31, 0x288F10u);
    ctx->pc = 0x288F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288F08u;
    // 0x288f0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x288F08u, 0x288F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F10u;
label_288f10:
    // 0x288f10: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x288f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x288f14: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x288f14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x288f18: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x288f18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x288f1c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x288F1Cu;
    {
        const bool branch_taken_0x288f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x288f1c) {
            ctx->pc = 0x288F30u;
            goto label_288f30;
        }
    }
    ctx->pc = 0x288F24u;
    // 0x288f24: 0xa65100c2  sh          $s1, 0xC2($s2)
    ctx->pc = 0x288f24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 17));
    // 0x288f28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x288F28u;
    {
        const bool branch_taken_0x288f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F28u;
        // 0x288f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f28) {
            ctx->pc = 0x288F70u;
            goto label_288f70;
        }
    }
    ctx->pc = 0x288F30u;
label_288f30:
    // 0x288f30: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x288f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x288f34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x288f34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x288f38: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288F38u;
    {
        const bool branch_taken_0x288f38 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x288f38) {
            ctx->pc = 0x288F50u;
            goto label_288f50;
        }
    }
    ctx->pc = 0x288F40u;
    // 0x288f40: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x288f40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x288f44: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x288f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x288f48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288F48u;
    {
        const bool branch_taken_0x288f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F48u;
        // 0x288f4c: 0xa64200c2  sh          $v0, 0xC2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f48) {
            ctx->pc = 0x288F60u;
            goto label_288f60;
        }
    }
    ctx->pc = 0x288F50u;
label_288f50:
    // 0x288f50: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x288f50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x288f54: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x288f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x288f58: 0xa64200c2  sh          $v0, 0xC2($s2)
    ctx->pc = 0x288f58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x288f5c: 0x0  nop
    ctx->pc = 0x288f5cu;
    // NOP
label_288f60:
    // 0x288f60: 0x864300c2  lh          $v1, 0xC2($s2)
    ctx->pc = 0x288f60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x288f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288f68: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x288f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x288f6c: 0xa64300c2  sh          $v1, 0xC2($s2)
    ctx->pc = 0x288f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 3));
label_288f70:
    // 0x288f70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x288f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288f74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x288f74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288f78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x288f78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288f7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x288f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x288f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288f84: 0x3e00008  jr          $ra
    ctx->pc = 0x288F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F84u;
        // 0x288f88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288F8Cu;
}
