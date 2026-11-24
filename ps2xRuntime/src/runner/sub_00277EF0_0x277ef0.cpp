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

// Function: sub_00277EF0
// Address: 0x277ef0 - 0x277ff0
void sub_00277EF0_0x277ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277EF0_0x277ef0");
#endif

    switch (ctx->pc) {
        case 0x277f44u: goto label_277f44;
        case 0x277fc4u: goto label_277fc4;
        default: break;
    }

    ctx->pc = 0x277ef0u;

    // 0x277ef0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x277ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x277ef4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x277ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x277ef8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x277ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x277efc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x277efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x277f00: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x277f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x277f04: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x277f04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f08: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x277f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x277f0c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x277f0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f10: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x277f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x277f14: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x277f14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f18: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x277f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x277f1c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x277f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x277f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x277f24: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x277f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x277f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x277f2c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x277f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f30: 0x8cc229c0  lw          $v0, 0x29C0($a2)
    ctx->pc = 0x277f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x277f34: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x277f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f38: 0x94570000  lhu         $s7, 0x0($v0)
    ctx->pc = 0x277f38u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x277f3c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x277F3Cu;
    SET_GPR_U32(ctx, 31, 0x277F44u);
    ctx->pc = 0x277F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F3Cu;
    // 0x277f40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x277F3Cu, 0x277F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F44u;
label_277f44:
    // 0x277f44: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x277f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x277f48: 0x32e2ffff  andi        $v0, $s7, 0xFFFF
    ctx->pc = 0x277f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x277f4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x277f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x277f50: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x277f50u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x277f54: 0x0  nop
    ctx->pc = 0x277f54u;
    // NOP
    // 0x277f58: 0x0  nop
    ctx->pc = 0x277f58u;
    // NOP
    // 0x277f5c: 0x1012  mflo        $v0
    ctx->pc = 0x277f5cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x277f60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x277f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x277f64: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x277f64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x277f68: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x277F68u;
    {
        const bool branch_taken_0x277f68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x277f68) {
            ctx->pc = 0x277F78u;
            goto label_277f78;
        }
    }
    ctx->pc = 0x277F70u;
    // 0x277f70: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x277f70u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x277f74: 0x0  nop
    ctx->pc = 0x277f74u;
    // NOP
label_277f78:
    // 0x277f78: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x277f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x277f7c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x277F7Cu;
    {
        const bool branch_taken_0x277f7c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x277f7c) {
            ctx->pc = 0x277F88u;
            goto label_277f88;
        }
    }
    ctx->pc = 0x277F84u;
    // 0x277f84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x277f84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277f88:
    // 0x277f88: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x277f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x277f8c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x277f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x277f90: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x277f90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x277f94: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x277f94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x277f98: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x277f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x277f9c: 0x306b00ff  andi        $t3, $v1, 0xFF
    ctx->pc = 0x277f9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x277fa0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fa4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x277fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fa8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x277fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fac: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x277facu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fb0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x277fb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fb4: 0x24e75bf0  addiu       $a3, $a3, 0x5BF0
    ctx->pc = 0x277fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23536));
    // 0x277fb8: 0x25085c40  addiu       $t0, $t0, 0x5C40
    ctx->pc = 0x277fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23616));
    // 0x277fbc: 0xc09de7c  jal         func_2779F0
    ctx->pc = 0x277FBCu;
    SET_GPR_U32(ctx, 31, 0x277FC4u);
    ctx->pc = 0x277FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277FBCu;
    // 0x277fc0: 0xffb60010  sd          $s6, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779F0u, 0x277FBCu, 0x277FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FC4u;
label_277fc4:
    // 0x277fc4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x277fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x277fc8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x277fc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x277fcc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x277fccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x277fd0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x277fd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277fd4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x277fd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277fd8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x277fd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277fdc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x277fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277fe0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x277fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277fe4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x277fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x277FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FE8u;
        // 0x277fec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277FF0u;
}
