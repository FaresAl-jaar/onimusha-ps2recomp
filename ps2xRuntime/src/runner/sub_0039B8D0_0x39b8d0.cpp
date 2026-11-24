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

// Function: sub_0039B8D0
// Address: 0x39b8d0 - 0x39b9d4
void sub_0039B8D0_0x39b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B8D0_0x39b8d0");
#endif

    switch (ctx->pc) {
        case 0x39b8e4u: goto label_39b8e4;
        case 0x39b99cu: goto label_39b99c;
        default: break;
    }

    ctx->pc = 0x39b8d0u;

    // 0x39b8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39b8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39b8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39b8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39b8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39b8dc: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x39B8DCu;
    SET_GPR_U32(ctx, 31, 0x39B8E4u);
    ctx->pc = 0x39B8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B8DCu;
    // 0x39b8e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x39B8DCu, 0x39B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B8E4u;
label_39b8e4:
    // 0x39b8e4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x39b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x39b8e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x39b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x39b8ec: 0xa6032b20  sh          $v1, 0x2B20($s0)
    ctx->pc = 0x39b8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11040), (uint16_t)GPR_U32(ctx, 3));
    // 0x39b8f0: 0x34480dcd  ori         $t0, $v0, 0xDCD
    ctx->pc = 0x39b8f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x39b8f4: 0xa2002b49  sb          $zero, 0x2B49($s0)
    ctx->pc = 0x39b8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11081), (uint8_t)GPR_U32(ctx, 0));
    // 0x39b8f8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x39b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x39b8fc: 0x8f8980e0  lw          $t1, -0x7F20($gp)
    ctx->pc = 0x39b8fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x39b900: 0x24070c00  addiu       $a3, $zero, 0xC00
    ctx->pc = 0x39b900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x39b904: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x39b904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39b908: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x39b908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x39b90c: 0x2442f380  addiu       $v0, $v0, -0xC80
    ctx->pc = 0x39b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964096));
    // 0x39b910: 0x3c06c396  lui         $a2, 0xC396
    ctx->pc = 0x39b910u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50070 << 16));
    // 0x39b914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b918: 0x1284018  mult        $t0, $t1, $t0
    ctx->pc = 0x39b918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x39b91c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x39b91cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x39b920: 0xaf8880e0  sw          $t0, -0x7F20($gp)
    ctx->pc = 0x39b920u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 8));
    // 0x39b924: 0x8f8880e0  lw          $t0, -0x7F20($gp)
    ctx->pc = 0x39b924u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x39b928: 0x84302  srl         $t0, $t0, 12
    ctx->pc = 0x39b928u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
    // 0x39b92c: 0x31080fff  andi        $t0, $t0, 0xFFF
    ctx->pc = 0x39b92cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4095);
    // 0x39b930: 0xa6082b50  sh          $t0, 0x2B50($s0)
    ctx->pc = 0x39b930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11088), (uint16_t)GPR_U32(ctx, 8));
    // 0x39b934: 0xa2002b4a  sb          $zero, 0x2B4A($s0)
    ctx->pc = 0x39b934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11082), (uint8_t)GPR_U32(ctx, 0));
    // 0x39b938: 0xa60700c0  sh          $a3, 0xC0($s0)
    ctx->pc = 0x39b938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 7));
    // 0x39b93c: 0xae002b40  sw          $zero, 0x2B40($s0)
    ctx->pc = 0x39b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11072), GPR_U32(ctx, 0));
    // 0x39b940: 0xae002b44  sw          $zero, 0x2B44($s0)
    ctx->pc = 0x39b940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11076), GPR_U32(ctx, 0));
    // 0x39b944: 0xae002b28  sw          $zero, 0x2B28($s0)
    ctx->pc = 0x39b944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11048), GPR_U32(ctx, 0));
    // 0x39b948: 0xa2002b24  sb          $zero, 0x2B24($s0)
    ctx->pc = 0x39b948u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11044), (uint8_t)GPR_U32(ctx, 0));
    // 0x39b94c: 0xa2032b22  sb          $v1, 0x2B22($s0)
    ctx->pc = 0x39b94cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11042), (uint8_t)GPR_U32(ctx, 3));
    // 0x39b950: 0xa2032b23  sb          $v1, 0x2B23($s0)
    ctx->pc = 0x39b950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11043), (uint8_t)GPR_U32(ctx, 3));
    // 0x39b954: 0xa2002b58  sb          $zero, 0x2B58($s0)
    ctx->pc = 0x39b954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11096), (uint8_t)GPR_U32(ctx, 0));
    // 0x39b958: 0xae002b5c  sw          $zero, 0x2B5C($s0)
    ctx->pc = 0x39b958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11100), GPR_U32(ctx, 0));
    // 0x39b95c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x39b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39b960: 0x8c670080  lw          $a3, 0x80($v1)
    ctx->pc = 0x39b960u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x39b964: 0x94e300c6  lhu         $v1, 0xC6($a3)
    ctx->pc = 0x39b964u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 198)));
    // 0x39b968: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x39b968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x39b96c: 0xa4e300c6  sh          $v1, 0xC6($a3)
    ctx->pc = 0x39b96cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 198), (uint16_t)GPR_U32(ctx, 3));
    // 0x39b970: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x39b970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x39b974: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x39b974u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x39b978: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x39b978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x39b97c: 0xa4650002  sh          $a1, 0x2($v1)
    ctx->pc = 0x39b97cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x39b980: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x39b980u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x39b984: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x39b984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39b988: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39b988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x39b98c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x39b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x39b990: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39b990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39b994: 0xc0e6948  jal         func_39A520
    ctx->pc = 0x39B994u;
    SET_GPR_U32(ctx, 31, 0x39B99Cu);
    ctx->pc = 0x39B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B994u;
    // 0x39b998: 0xac460004  sw          $a2, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A520u, 0x39B994u, 0x39B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B99Cu;
label_39b99c:
    // 0x39b99c: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x39b99cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x39b9a0: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x39b9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x39b9a4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x39b9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x39b9a8: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x39b9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x39b9ac: 0x8e0306c8  lw          $v1, 0x6C8($s0)
    ctx->pc = 0x39b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x39b9b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x39b9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x39b9b4: 0xae0306c8  sw          $v1, 0x6C8($s0)
    ctx->pc = 0x39b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 3));
    // 0x39b9b8: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x39b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x39b9bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x39b9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x39b9c0: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x39b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x39b9c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39b9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b9c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39b9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x39B9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B9CCu;
        // 0x39b9d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B9D4u;
}
