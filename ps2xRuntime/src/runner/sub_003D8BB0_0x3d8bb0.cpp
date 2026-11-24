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

// Function: sub_003D8BB0
// Address: 0x3d8bb0 - 0x3d8c78
void sub_003D8BB0_0x3d8bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8BB0_0x3d8bb0");
#endif

    switch (ctx->pc) {
        case 0x3d8c10u: goto label_3d8c10;
        case 0x3d8c1cu: goto label_3d8c1c;
        default: break;
    }

    ctx->pc = 0x3d8bb0u;

    // 0x3d8bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d8bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d8bb4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3d8bb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d8bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d8bbc: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x3d8bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x3d8bc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d8bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d8bc4: 0x2442e5c0  addiu       $v0, $v0, -0x1A40
    ctx->pc = 0x3d8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960576));
    // 0x3d8bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d8bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d8bcc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d8bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d8bd0: 0x87868450  lh          $a2, -0x7BB0($gp)
    ctx->pc = 0x3d8bd0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x3d8bd4: 0x93838452  lbu         $v1, -0x7BAE($gp)
    ctx->pc = 0x3d8bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935634)));
    // 0x3d8bd8: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x3d8bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3d8bdc: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x3d8bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d8be0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3d8be0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x65E5C0u));
    // 0x3d8be4: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x3d8be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x65E5C8u));
    // 0x3d8be8: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x3d8be8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x3d8bec: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x3d8becu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d8bf0: 0x90832bd9  lbu         $v1, 0x2BD9($a0)
    ctx->pc = 0x3d8bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11225)));
    // 0x3d8bf4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3d8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3d8bf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d8bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d8bfc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3d8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3d8c00: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3d8c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3d8c04: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x3d8c04u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d8c08: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3D8C08u;
    SET_GPR_U32(ctx, 31, 0x3D8C10u);
    ctx->pc = 0x3D8C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8C08u;
    // 0x3d8c0c: 0x90500001  lbu         $s0, 0x1($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3D8C08u, 0x3D8C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8C10u;
label_3d8c10:
    // 0x3d8c10: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3d8c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3d8c14: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3D8C14u;
    SET_GPR_U32(ctx, 31, 0x3D8C1Cu);
    ctx->pc = 0x3D8C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8C14u;
    // 0x3d8c18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3D8C14u, 0x3D8C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8C1Cu;
label_3d8c1c:
    // 0x3d8c1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3d8c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d8c20: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d8c20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d8c24: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x3d8c24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d8c28: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8C28u;
    {
        const bool branch_taken_0x3d8c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8c28) {
            ctx->pc = 0x3D8C38u;
            goto label_3d8c38;
        }
    }
    ctx->pc = 0x3D8C30u;
    // 0x3d8c30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3D8C30u;
    {
        const bool branch_taken_0x3d8c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C30u;
        // 0x3d8c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c30) {
            ctx->pc = 0x3D8C58u;
            goto label_3d8c58;
        }
    }
    ctx->pc = 0x3D8C38u;
label_3d8c38:
    // 0x3d8c38: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x3d8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3d8c3c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3d8c3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d8c40: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8C40u;
    {
        const bool branch_taken_0x3d8c40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C40u;
        // 0x3d8c44: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c40) {
            ctx->pc = 0x3D8C50u;
            goto label_3d8c50;
        }
    }
    ctx->pc = 0x3D8C48u;
    // 0x3d8c48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8C48u;
    {
        const bool branch_taken_0x3d8c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8c48) {
            ctx->pc = 0x3D8C58u;
            goto label_3d8c58;
        }
    }
    ctx->pc = 0x3D8C50u;
label_3d8c50:
    // 0x3d8c50: 0x64020002  daddiu      $v0, $zero, 0x2
    ctx->pc = 0x3d8c50u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x3d8c54: 0x0  nop
    ctx->pc = 0x3d8c54u;
    // NOP
label_3d8c58:
    // 0x3d8c58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3d8c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d8c5c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3d8c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3d8c60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d8c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d8c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d8c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8c6c: 0x9042003c  lbu         $v0, 0x3C($v0)
    ctx->pc = 0x3d8c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x3d8c70: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C70u;
        // 0x3d8c74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8C78u;
}
