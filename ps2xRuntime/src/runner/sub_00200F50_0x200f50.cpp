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

// Function: sub_00200F50
// Address: 0x200f50 - 0x201018
void sub_00200F50_0x200f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200F50_0x200f50");
#endif

    switch (ctx->pc) {
        case 0x200f6cu: goto label_200f6c;
        case 0x200f84u: goto label_200f84;
        case 0x200f8cu: goto label_200f8c;
        case 0x200f94u: goto label_200f94;
        case 0x200fc0u: goto label_200fc0;
        case 0x200fd8u: goto label_200fd8;
        case 0x200ff4u: goto label_200ff4;
        default: break;
    }

    ctx->pc = 0x200f50u;

    // 0x200f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200f58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200f60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x200f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x200f64: 0xc080338  jal         func_200CE0
    ctx->pc = 0x200F64u;
    SET_GPR_U32(ctx, 31, 0x200F6Cu);
    ctx->pc = 0x200F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F64u;
    // 0x200f68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CE0u, 0x200F64u, 0x200F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F6Cu;
label_200f6c:
    // 0x200f6c: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x200f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x200f70: 0x3c050087  lui         $a1, 0x87
    ctx->pc = 0x200f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)135 << 16));
    // 0x200f74: 0x24a53f40  addiu       $a1, $a1, 0x3F40
    ctx->pc = 0x200f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16192));
    // 0x200f78: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x200f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x200f7c: 0xc07ec0c  jal         func_1FB030
    ctx->pc = 0x200F7Cu;
    SET_GPR_U32(ctx, 31, 0x200F84u);
    ctx->pc = 0x200F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F7Cu;
    // 0x200f80: 0x26040190  addiu       $a0, $s0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB030u, 0x200F7Cu, 0x200F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F84u;
label_200f84:
    // 0x200f84: 0xc07f9c4  jal         func_1FE710
    ctx->pc = 0x200F84u;
    SET_GPR_U32(ctx, 31, 0x200F8Cu);
    ctx->pc = 0x200F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F84u;
    // 0x200f88: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE710u, 0x200F84u, 0x200F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F8Cu;
label_200f8c:
    // 0x200f8c: 0xc080374  jal         func_200DD0
    ctx->pc = 0x200F8Cu;
    SET_GPR_U32(ctx, 31, 0x200F94u);
    ctx->pc = 0x200F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F8Cu;
    // 0x200f90: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200DD0u, 0x200F8Cu, 0x200F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F94u;
label_200f94:
    // 0x200f94: 0xae000384  sw          $zero, 0x384($s0)
    ctx->pc = 0x200f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 0));
    // 0x200f98: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x200f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x200f9c: 0xae000388  sw          $zero, 0x388($s0)
    ctx->pc = 0x200f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 0));
    // 0x200fa0: 0xae0203a8  sw          $v0, 0x3A8($s0)
    ctx->pc = 0x200fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 2));
    // 0x200fa4: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x200fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
    // 0x200fa8: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x200fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x200fac: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x200facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
    // 0x200fb0: 0xae000368  sw          $zero, 0x368($s0)
    ctx->pc = 0x200fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
    // 0x200fb4: 0xae000398  sw          $zero, 0x398($s0)
    ctx->pc = 0x200fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
    // 0x200fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x200fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fbc: 0x0  nop
    ctx->pc = 0x200fbcu;
    // NOP
label_200fc0:
    // 0x200fc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x200fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x200fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x200fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x200fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fd0: 0xc07fb8e  jal         func_1FEE38
    ctx->pc = 0x200FD0u;
    SET_GPR_U32(ctx, 31, 0x200FD8u);
    ctx->pc = 0x200FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FD0u;
    // 0x200fd4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE38u, 0x200FD0u, 0x200FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FD8u;
label_200fd8:
    // 0x200fd8: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x200fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x200fdc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x200FDCu;
    {
        const bool branch_taken_0x200fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FDCu;
        // 0x200fe0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200fdc) {
            ctx->pc = 0x200FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200fc0;
        }
    }
    ctx->pc = 0x200FE4u;
    // 0x200fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fec: 0xc07fb98  jal         func_1FEE60
    ctx->pc = 0x200FECu;
    SET_GPR_U32(ctx, 31, 0x200FF4u);
    ctx->pc = 0x200FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FECu;
    // 0x200ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE60u, 0x200FECu, 0x200FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FF4u;
label_200ff4:
    // 0x200ff4: 0xae000408  sw          $zero, 0x408($s0)
    ctx->pc = 0x200ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 0));
    // 0x200ff8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x200ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x200ffc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x200ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201000: 0xae030188  sw          $v1, 0x188($s0)
    ctx->pc = 0x201000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 3));
    // 0x201004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201008: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20100c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20100cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201010: 0x3e00008  jr          $ra
    ctx->pc = 0x201010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201010u;
        // 0x201014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201018u;
}
