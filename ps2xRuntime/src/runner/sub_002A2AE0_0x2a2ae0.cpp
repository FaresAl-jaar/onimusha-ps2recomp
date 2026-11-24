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

// Function: sub_002A2AE0
// Address: 0x2a2ae0 - 0x2a2bd0
void sub_002A2AE0_0x2a2ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2AE0_0x2a2ae0");
#endif

    ctx->pc = 0x2a2ae0u;

    // 0x2a2ae0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2a2ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a2ae4: 0x8c89013c  lw          $t1, 0x13C($a0)
    ctx->pc = 0x2a2ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x2a2ae8: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x2a2ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a2aec: 0x8c8c0140  lw          $t4, 0x140($a0)
    ctx->pc = 0x2a2aecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x2a2af0: 0x24c200f0  addiu       $v0, $a2, 0xF0
    ctx->pc = 0x2a2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
    // 0x2a2af4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x2a2af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x2a2af8: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2a2af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2a2afc: 0x346e0003  ori         $t6, $v1, 0x3
    ctx->pc = 0x2a2afcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2a2b00: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2a2b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2a2b04: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2a2b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a2b08: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2a2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2a2b0c: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x2a2b0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x2a2b10: 0x344d0003  ori         $t5, $v0, 0x3
    ctx->pc = 0x2a2b10u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2a2b14: 0x34480005  ori         $t0, $v0, 0x5
    ctx->pc = 0x2a2b14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x2a2b18: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2a2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2a2b1c: 0xc613c  dsll32      $t4, $t4, 4
    ctx->pc = 0x2a2b1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 4));
    // 0x2a2b20: 0x344b0404  ori         $t3, $v0, 0x404
    ctx->pc = 0x2a2b20u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x2a2b24: 0xc613e  dsrl32      $t4, $t4, 4
    ctx->pc = 0x2a2b24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 4));
    // 0x2a2b28: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x2a2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x2a2b2c: 0x344a03f8  ori         $t2, $v0, 0x3F8
    ctx->pc = 0x2a2b2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1016);
    // 0x2a2b30: 0x9113c  dsll32      $v0, $t1, 4
    ctx->pc = 0x2a2b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 4));
    // 0x2a2b34: 0xc483c  dsll32      $t1, $t4, 0
    ctx->pc = 0x2a2b34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) << (32 + 0));
    // 0x2a2b38: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2a2b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2a2b3c: 0x12e7025  or          $t6, $t1, $t6
    ctx->pc = 0x2a2b3cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) | GPR_U64(ctx, 14));
    // 0x2a2b40: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x2a2b40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a2b44: 0xfcae0000  sd          $t6, 0x0($a1)
    ctx->pc = 0x2a2b44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 14));
    // 0x2a2b48: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x2a2b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2a2b4c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2a2b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2a2b50: 0xc24825  or          $t1, $a2, $v0
    ctx->pc = 0x2a2b50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a2b54: 0xacad000c  sw          $t5, 0xC($a1)
    ctx->pc = 0x2a2b54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 13));
    // 0x2a2b58: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x2a2b58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x2a2b5c: 0x8c840078  lw          $a0, 0x78($a0)
    ctx->pc = 0x2a2b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2a2b60: 0x24a20050  addiu       $v0, $a1, 0x50
    ctx->pc = 0x2a2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x2a2b64: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x2a2b64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2a2b68: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2a2b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a2b6c: 0x24840009  addiu       $a0, $a0, 0x9
    ctx->pc = 0x2a2b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9));
    // 0x2a2b70: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2a2b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a2b74: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2a2b74u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2a2b78: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2a2b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a2b7c: 0x1831825  or          $v1, $t4, $v1
    ctx->pc = 0x2a2b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x2a2b80: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x2a2b80u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x2a2b84: 0xacab0018  sw          $t3, 0x18($a1)
    ctx->pc = 0x2a2b84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 11));
    // 0x2a2b88: 0xacaa001c  sw          $t2, 0x1C($a1)
    ctx->pc = 0x2a2b88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 10));
    // 0x2a2b8c: 0xfca90020  sd          $t1, 0x20($a1)
    ctx->pc = 0x2a2b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 9));
    // 0x2a2b90: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x2a2b90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x2a2b94: 0xaca8002c  sw          $t0, 0x2C($a1)
    ctx->pc = 0x2a2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 8));
    // 0x2a2b98: 0x8ce30070  lw          $v1, 0x70($a3)
    ctx->pc = 0x2a2b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x2a2b9c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x2a2b9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2ba0: 0xfca30030  sd          $v1, 0x30($a1)
    ctx->pc = 0x2a2ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
    // 0x2a2ba4: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x2a2ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x2a2ba8: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x2a2ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x2a2bac: 0x8ce30078  lw          $v1, 0x78($a3)
    ctx->pc = 0x2a2bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 120)));
    // 0x2a2bb0: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x2a2bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x2a2bb4: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x2a2bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x2a2bb8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a2bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a2bbc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2a2bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a2bc0: 0xfca30040  sd          $v1, 0x40($a1)
    ctx->pc = 0x2a2bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 3));
    // 0x2a2bc4: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x2a2bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
    // 0x2a2bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BC8u;
        // 0x2a2bcc: 0xaca0004c  sw          $zero, 0x4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2BD0u;
}
