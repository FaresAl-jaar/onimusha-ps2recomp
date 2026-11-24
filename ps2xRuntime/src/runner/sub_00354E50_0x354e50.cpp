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

// Function: sub_00354E50
// Address: 0x354e50 - 0x354f9c
void sub_00354E50_0x354e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354E50_0x354e50");
#endif

    switch (ctx->pc) {
        case 0x354eb0u: goto label_354eb0;
        case 0x354ed8u: goto label_354ed8;
        case 0x354f18u: goto label_354f18;
        case 0x354f44u: goto label_354f44;
        case 0x354f60u: goto label_354f60;
        default: break;
    }

    ctx->pc = 0x354e50u;

    // 0x354e50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x354e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x354e54: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x354e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x354e58: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x354e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x354e5c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x354e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x354e60: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x354e60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x354e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x354e68: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x354e68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x354e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x354e70: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x354e70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x354e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x354e78: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x354e78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x354e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x354e80: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x354e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e84: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x354e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x354e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x354e8c: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x354e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x354e90: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x354e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x354e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x354e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x354e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ea0: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x354ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x354ea4: 0x25084de0  addiu       $t0, $t0, 0x4DE0
    ctx->pc = 0x354ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19936));
    // 0x354ea8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x354EA8u;
    SET_GPR_U32(ctx, 31, 0x354EB0u);
    ctx->pc = 0x354EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354EA8u;
    // 0x354eac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x354EA8u, 0x354EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354EB0u;
label_354eb0:
    // 0x354eb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x354eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354eb4: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x354EB4u;
    {
        const bool branch_taken_0x354eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x354EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354EB4u;
        // 0x354eb8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354eb4) {
            ctx->pc = 0x354F68u;
            goto label_354f68;
        }
    }
    ctx->pc = 0x354EBCu;
    // 0x354ebc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x354ebcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ec0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x354ec0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ec4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x354ec4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ecc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x354eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354ed0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x354ED0u;
    SET_GPR_U32(ctx, 31, 0x354ED8u);
    ctx->pc = 0x354ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354ED0u;
    // 0x354ed4: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x354ED0u, 0x354ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354ED8u;
label_354ed8:
    // 0x354ed8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x354ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354edc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x354edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x354ee0: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x354ee0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x354ee4: 0x2442f910  addiu       $v0, $v0, -0x6F0
    ctx->pc = 0x354ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965520));
    // 0x354ee8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x354ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x354eec: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x354eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x354ef0: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x354ef0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354ef4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x354ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x354ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354efc: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x354efcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x354f00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354f04: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x354f04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x354f08: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x354f08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x354f0c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x354f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x354f10: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x354F10u;
    SET_GPR_U32(ctx, 31, 0x354F18u);
    ctx->pc = 0x354F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354F10u;
    // 0x354f14: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x354F10u, 0x354F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354F18u;
label_354f18:
    // 0x354f18: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x354f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x354f1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x354f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x354f20: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x354f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x354f24: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x354f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x354f28: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x354f28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x354f2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x354f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354f30: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x354f30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x354f34: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x354f34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x354f38: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x354f38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x354f3c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x354F3Cu;
    SET_GPR_U32(ctx, 31, 0x354F44u);
    ctx->pc = 0x354F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354F3Cu;
    // 0x354f40: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x354F3Cu, 0x354F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354F44u;
label_354f44:
    // 0x354f44: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x354f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x354f48: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x354f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x354f4c: 0x2442f914  addiu       $v0, $v0, -0x6EC
    ctx->pc = 0x354f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965524));
    // 0x354f50: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x354f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x354f54: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x354f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x354f58: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x354F58u;
    SET_GPR_U32(ctx, 31, 0x354F60u);
    ctx->pc = 0x354F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354F58u;
    // 0x354f5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x354F58u, 0x354F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354F60u;
label_354f60:
    // 0x354f60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x354F60u;
    {
        const bool branch_taken_0x354f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F60u;
        // 0x354f64: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354f60) {
            ctx->pc = 0x354F70u;
            goto label_354f70;
        }
    }
    ctx->pc = 0x354F68u;
label_354f68:
    // 0x354f68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354f6c: 0x0  nop
    ctx->pc = 0x354f6cu;
    // NOP
label_354f70:
    // 0x354f70: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x354f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x354f74: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x354f74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x354f78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x354f78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x354f7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x354f7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x354f80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x354f80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x354f84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x354f84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x354f88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x354f88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354f8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x354f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354f90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x354f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354f94: 0x3e00008  jr          $ra
    ctx->pc = 0x354F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F94u;
        // 0x354f98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354F9Cu;
}
