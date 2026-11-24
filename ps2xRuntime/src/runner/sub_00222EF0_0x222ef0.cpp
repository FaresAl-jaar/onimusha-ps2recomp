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

// Function: sub_00222EF0
// Address: 0x222ef0 - 0x223014
void sub_00222EF0_0x222ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222EF0_0x222ef0");
#endif

    switch (ctx->pc) {
        case 0x222f30u: goto label_222f30;
        case 0x222fd4u: goto label_222fd4;
        case 0x222fe8u: goto label_222fe8;
        default: break;
    }

    ctx->pc = 0x222ef0u;

    // 0x222ef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x222ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x222ef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222ef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x222ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x222efc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x222f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x222f04: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x222f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f08: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x222f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x222f0c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x222f0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f10: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x222f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x222f14: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x222f14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f18: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x222f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x222f1c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x222f1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x222f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x222f24: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x222f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x222f28: 0xc084968  jal         func_2125A0
    ctx->pc = 0x222F28u;
    SET_GPR_U32(ctx, 31, 0x222F30u);
    ctx->pc = 0x222F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F28u;
    // 0x222f2c: 0x26302150  addiu       $s0, $s1, 0x2150 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x222F28u, 0x222F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F30u;
label_222f30:
    // 0x222f30: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x222f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x222f34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x222f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f38: 0x34a50192  ori         $a1, $a1, 0x192
    ctx->pc = 0x222f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)402);
    // 0x222f3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x222F3Cu;
    {
        const bool branch_taken_0x222f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F3Cu;
        // 0x222f40: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f3c) {
            ctx->pc = 0x222F70u;
            goto label_222f70;
        }
    }
    ctx->pc = 0x222F44u;
    // 0x222f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222f48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222f4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x222f4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222f50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x222f50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x222f54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x222f54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222f58: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x222f58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x222f5c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x222f5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222f60: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x222f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x222f64: 0x80848e0  j           func_212380
    ctx->pc = 0x222F64u;
    ctx->pc = 0x222F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F64u;
    // 0x222f68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x222F6Cu;
    // 0x222f6c: 0x0  nop
    ctx->pc = 0x222f6cu;
    // NOP
label_222f70:
    // 0x222f70: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x222f70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x222f74: 0x1643000e  bne         $s2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x222F74u;
    {
        const bool branch_taken_0x222f74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x222F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F74u;
        // 0x222f78: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f74) {
            ctx->pc = 0x222FB0u;
            goto label_222fb0;
        }
    }
    ctx->pc = 0x222F7Cu;
    // 0x222f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222f80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222f84: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x222f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x222f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222f8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x222f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222f90: 0x34a50602  ori         $a1, $a1, 0x602
    ctx->pc = 0x222f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1538);
    // 0x222f94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x222f94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x222f98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x222f98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222f9c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x222f9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x222fa0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x222fa0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222fa4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x222fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x222fa8: 0x80848e0  j           func_212380
    ctx->pc = 0x222FA8u;
    ctx->pc = 0x222FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222FA8u;
    // 0x222fac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x222FB0u;
label_222fb0:
    // 0x222fb0: 0x168100  sll         $s0, $s6, 4
    ctx->pc = 0x222fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x222fb4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x222fb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fb8: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x222fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x222fbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x222fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fc0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x222fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x222fc4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x222fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fcc: 0xc088cda  jal         func_223368
    ctx->pc = 0x222FCCu;
    SET_GPR_U32(ctx, 31, 0x222FD4u);
    ctx->pc = 0x222FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222FCCu;
    // 0x222fd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223368u, 0x222FCCu, 0x222FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222FD4u;
label_222fd4:
    // 0x222fd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x222fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fdc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x222fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fe0: 0xc083d0e  jal         func_20F438
    ctx->pc = 0x222FE0u;
    SET_GPR_U32(ctx, 31, 0x222FE8u);
    ctx->pc = 0x222FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222FE0u;
    // 0x222fe4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F438u, 0x222FE0u, 0x222FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222FE8u;
label_222fe8:
    // 0x222fe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x222fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222ff0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222ff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222ff4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x222ff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222ff8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x222ff8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x222ffc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x222ffcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223000: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x223000u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x223004: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x223004u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223008: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x223008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22300c: 0x3e00008  jr          $ra
    ctx->pc = 0x22300Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22300Cu;
        // 0x223010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22300Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223014u;
}
