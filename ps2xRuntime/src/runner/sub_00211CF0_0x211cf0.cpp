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

// Function: sub_00211CF0
// Address: 0x211cf0 - 0x211da4
void sub_00211CF0_0x211cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211CF0_0x211cf0");
#endif

    switch (ctx->pc) {
        case 0x211d14u: goto label_211d14;
        case 0x211d28u: goto label_211d28;
        case 0x211d3cu: goto label_211d3c;
        case 0x211d50u: goto label_211d50;
        case 0x211d64u: goto label_211d64;
        case 0x211d78u: goto label_211d78;
        case 0x211d8cu: goto label_211d8c;
        default: break;
    }

    ctx->pc = 0x211cf0u;

    // 0x211cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211cf4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x211cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x211cf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211cfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x211cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d00: 0x244541a8  addiu       $a1, $v0, 0x41A8
    ctx->pc = 0x211d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16808));
    // 0x211d04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x211d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211d0c: 0xc084814  jal         func_212050
    ctx->pc = 0x211D0Cu;
    SET_GPR_U32(ctx, 31, 0x211D14u);
    ctx->pc = 0x211D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D0Cu;
    // 0x211d10: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x211D0Cu, 0x211D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D14u;
label_211d14:
    // 0x211d14: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x211d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x211d18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x211d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x211d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d20: 0xc084814  jal         func_212050
    ctx->pc = 0x211D20u;
    SET_GPR_U32(ctx, 31, 0x211D28u);
    ctx->pc = 0x211D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D20u;
    // 0x211d24: 0x24a541f8  addiu       $a1, $a1, 0x41F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x211D20u, 0x211D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D28u;
label_211d28:
    // 0x211d28: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x211d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x211d2c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x211d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x211d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d34: 0xc084814  jal         func_212050
    ctx->pc = 0x211D34u;
    SET_GPR_U32(ctx, 31, 0x211D3Cu);
    ctx->pc = 0x211D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D34u;
    // 0x211d38: 0x24a54248  addiu       $a1, $a1, 0x4248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x211D34u, 0x211D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D3Cu;
label_211d3c:
    // 0x211d3c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x211d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x211d40: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x211d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x211d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d48: 0xc084814  jal         func_212050
    ctx->pc = 0x211D48u;
    SET_GPR_U32(ctx, 31, 0x211D50u);
    ctx->pc = 0x211D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D48u;
    // 0x211d4c: 0x24a54298  addiu       $a1, $a1, 0x4298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x211D48u, 0x211D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D50u;
label_211d50:
    // 0x211d50: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x211d50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x211d54: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x211d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x211d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d5c: 0xc084814  jal         func_212050
    ctx->pc = 0x211D5Cu;
    SET_GPR_U32(ctx, 31, 0x211D64u);
    ctx->pc = 0x211D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D5Cu;
    // 0x211d60: 0x24a54350  addiu       $a1, $a1, 0x4350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x211D5Cu, 0x211D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D64u;
label_211d64:
    // 0x211d64: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x211d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x211d68: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x211d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x211d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d70: 0xc084814  jal         func_212050
    ctx->pc = 0x211D70u;
    SET_GPR_U32(ctx, 31, 0x211D78u);
    ctx->pc = 0x211D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D70u;
    // 0x211d74: 0x24a543a0  addiu       $a1, $a1, 0x43A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x211D70u, 0x211D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D78u;
label_211d78:
    // 0x211d78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x211d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x211d7c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x211d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x211d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d84: 0xc084814  jal         func_212050
    ctx->pc = 0x211D84u;
    SET_GPR_U32(ctx, 31, 0x211D8Cu);
    ctx->pc = 0x211D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D84u;
    // 0x211d88: 0x24a543f0  addiu       $a1, $a1, 0x43F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x211D84u, 0x211D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D8Cu;
label_211d8c:
    // 0x211d8c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x211d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x211d90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211d90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211d94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211d98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x211D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D9Cu;
        // 0x211da0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211DA4u;
}
