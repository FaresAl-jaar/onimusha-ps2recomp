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

// Function: sub_00249EC8
// Address: 0x249ec8 - 0x249f64
void sub_00249EC8_0x249ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249EC8_0x249ec8");
#endif

    switch (ctx->pc) {
        case 0x249ef8u: goto label_249ef8;
        case 0x249f0cu: goto label_249f0c;
        case 0x249f14u: goto label_249f14;
        case 0x249f20u: goto label_249f20;
        case 0x249f34u: goto label_249f34;
        default: break;
    }

    ctx->pc = 0x249ec8u;

    // 0x249ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x249ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x249ecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x249eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x249ed0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x249ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249ed8: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x249ED8u;
    {
        const bool branch_taken_0x249ed8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x249EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249ED8u;
        // 0x249edc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ed8) {
            ctx->pc = 0x249F50u;
            goto label_249f50;
        }
    }
    ctx->pc = 0x249EE0u;
    // 0x249ee0: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x249ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x249ee4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x249ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x249ee8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x249EE8u;
    {
        const bool branch_taken_0x249ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249ee8) {
            ctx->pc = 0x249EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249EE8u;
            // 0x249eec: 0x82220001  lb          $v0, 0x1($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249EFCu;
            goto label_249efc;
        }
    }
    ctx->pc = 0x249EF0u;
    // 0x249ef0: 0xc092872  jal         func_24A1C8
    ctx->pc = 0x249EF0u;
    SET_GPR_U32(ctx, 31, 0x249EF8u);
    ctx->pc = 0x24A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A1C8u, 0x249EF0u, 0x249EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249EF8u;
label_249ef8:
    // 0x249ef8: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x249ef8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_249efc:
    // 0x249efc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x249EFCu;
    {
        const bool branch_taken_0x249efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249efc) {
            ctx->pc = 0x249F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249EFCu;
            // 0x249f00: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249F38u;
            goto label_249f38;
        }
    }
    ctx->pc = 0x249F04u;
    // 0x249f04: 0xc091a44  jal         func_246910
    ctx->pc = 0x249F04u;
    SET_GPR_U32(ctx, 31, 0x249F0Cu);
    ctx->pc = 0x249F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F04u;
    // 0x249f08: 0x24045000  addiu       $a0, $zero, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249F04u, 0x249F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F0Cu;
label_249f0c:
    // 0x249f0c: 0xc091b22  jal         func_246C88
    ctx->pc = 0x249F0Cu;
    SET_GPR_U32(ctx, 31, 0x249F14u);
    ctx->pc = 0x249F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F0Cu;
    // 0x249f10: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C88u, 0x249F0Cu, 0x249F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F14u;
label_249f14:
    // 0x249f14: 0x24045001  addiu       $a0, $zero, 0x5001
    ctx->pc = 0x249f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20481));
    // 0x249f18: 0xc091a44  jal         func_246910
    ctx->pc = 0x249F18u;
    SET_GPR_U32(ctx, 31, 0x249F20u);
    ctx->pc = 0x249F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F18u;
    // 0x249f1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249F18u, 0x249F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F20u;
label_249f20:
    // 0x249f20: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x249f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x249f24: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249F24u;
    {
        const bool branch_taken_0x249f24 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x249F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F24u;
        // 0x249f28: 0x2484d4c8  addiu       $a0, $a0, -0x2B38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f24) {
            ctx->pc = 0x249F34u;
            goto label_249f34;
        }
    }
    ctx->pc = 0x249F2Cu;
    // 0x249f2c: 0xc08d460  jal         func_235180
    ctx->pc = 0x249F2Cu;
    SET_GPR_U32(ctx, 31, 0x249F34u);
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x249F2Cu, 0x249F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F34u;
label_249f34:
    // 0x249f34: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x249f34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_249f38:
    // 0x249f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249f40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249f44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249f48: 0x809274c  j           func_249D30
    ctx->pc = 0x249F48u;
    ctx->pc = 0x249F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F48u;
    // 0x249f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D30u;
    sub_00249D30_0x249d30(rdram, ctx, runtime); return;
    ctx->pc = 0x249F50u;
label_249f50:
    // 0x249f50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249f54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249f58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x249F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F5Cu;
        // 0x249f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249F64u;
}
