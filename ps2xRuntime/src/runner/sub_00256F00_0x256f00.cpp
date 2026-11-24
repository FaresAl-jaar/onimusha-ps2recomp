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

// Function: sub_00256F00
// Address: 0x256f00 - 0x256fc0
void sub_00256F00_0x256f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256F00_0x256f00");
#endif

    ctx->pc = 0x256f00u;

    // 0x256f00: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x256f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x256f04: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x256f04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x256f08: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x256f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x256f0c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x256F0Cu;
    {
        const bool branch_taken_0x256f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F0Cu;
        // 0x256f10: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f0c) {
            ctx->pc = 0x256F18u;
            goto label_256f18;
        }
    }
    ctx->pc = 0x256F14u;
    // 0x256f14: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x256f14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_256f18:
    // 0x256f18: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x256f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x256f1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x256f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x256f20: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x256f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x256f24: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x256f24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x256f28: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x256F28u;
    {
        const bool branch_taken_0x256f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x256F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F28u;
        // 0x256f2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f28) {
            ctx->pc = 0x256F70u;
            goto label_256f70;
        }
    }
    ctx->pc = 0x256F30u;
    // 0x256f30: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x256F30u;
    {
        const bool branch_taken_0x256f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x256f30) {
            ctx->pc = 0x256F68u;
            goto label_256f68;
        }
    }
    ctx->pc = 0x256F38u;
    // 0x256f38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256f3c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256F3Cu;
    {
        const bool branch_taken_0x256f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x256f3c) {
            ctx->pc = 0x256F60u;
            goto label_256f60;
        }
    }
    ctx->pc = 0x256F44u;
    // 0x256f44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x256F44u;
    {
        const bool branch_taken_0x256f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256f44) {
            ctx->pc = 0x256F58u;
            goto label_256f58;
        }
    }
    ctx->pc = 0x256F4Cu;
    // 0x256f4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x256F4Cu;
    {
        const bool branch_taken_0x256f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256f4c) {
            ctx->pc = 0x256F78u;
            goto label_256f78;
        }
    }
    ctx->pc = 0x256F54u;
    // 0x256f54: 0x0  nop
    ctx->pc = 0x256f54u;
    // NOP
label_256f58:
    // 0x256f58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x256F58u;
    {
        const bool branch_taken_0x256f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F58u;
        // 0x256f5c: 0x64066000  daddiu      $a2, $zero, 0x6000 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24576);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f58) {
            ctx->pc = 0x256F78u;
            goto label_256f78;
        }
    }
    ctx->pc = 0x256F60u;
label_256f60:
    // 0x256f60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x256F60u;
    {
        const bool branch_taken_0x256f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F60u;
        // 0x256f64: 0x64066000  daddiu      $a2, $zero, 0x6000 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24576);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f60) {
            ctx->pc = 0x256F78u;
            goto label_256f78;
        }
    }
    ctx->pc = 0x256F68u;
label_256f68:
    // 0x256f68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x256F68u;
    {
        const bool branch_taken_0x256f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F68u;
        // 0x256f6c: 0x64066000  daddiu      $a2, $zero, 0x6000 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24576);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f68) {
            ctx->pc = 0x256F78u;
            goto label_256f78;
        }
    }
    ctx->pc = 0x256F70u;
label_256f70:
    // 0x256f70: 0x64066000  daddiu      $a2, $zero, 0x6000
    ctx->pc = 0x256f70u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24576);
    // 0x256f74: 0x0  nop
    ctx->pc = 0x256f74u;
    // NOP
label_256f78:
    // 0x256f78: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x256f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x256f7c: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x256f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x256f80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256f84: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x256F84u;
    {
        const bool branch_taken_0x256f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256f84) {
            ctx->pc = 0x256FB8u;
            goto label_256fb8;
        }
    }
    ctx->pc = 0x256F8Cu;
    // 0x256f8c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x256f8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x256f90: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x256f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x256f94: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x256f94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x256f98: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x256f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x256f9c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x256f9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256fa0: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x256fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x256fa4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x256fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x256fa8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x256fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x256fac: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x256facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x256fb0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x256fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x256fb4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x256fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_256fb8:
    // 0x256fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x256FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FB8u;
        // 0x256fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256FC0u;
}
