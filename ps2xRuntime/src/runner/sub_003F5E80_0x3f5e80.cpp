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

// Function: sub_003F5E80
// Address: 0x3f5e80 - 0x3f6000
void sub_003F5E80_0x3f5e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5E80_0x3f5e80");
#endif

    switch (ctx->pc) {
        case 0x3f5fd8u: goto label_3f5fd8;
        default: break;
    }

    ctx->pc = 0x3f5e80u;

    // 0x3f5e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f5e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f5e84: 0x86c3c  dsll32      $t5, $t0, 16
    ctx->pc = 0x3f5e84u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) << (32 + 16));
    // 0x3f5e88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f5e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f5e8c: 0x3c0c0066  lui         $t4, 0x66
    ctx->pc = 0x3f5e8cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)102 << 16));
    // 0x3f5e90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f5e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f5e94: 0x258c17e0  addiu       $t4, $t4, 0x17E0
    ctx->pc = 0x3f5e94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 6112));
    // 0x3f5e98: 0xdd830000  ld          $v1, 0x0($t4)
    ctx->pc = 0x3f5e98u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x6617E0u));
    // 0x3f5e9c: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x3f5e9cu;
    { uint32_t bits = FAST_READ32(0x6617E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f5ea0: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x3f5ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f5ea4: 0xd6c3f  dsra32      $t5, $t5, 16
    ctx->pc = 0x3f5ea4u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 16));
    // 0x3f5ea8: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x3f5ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x3f5eac: 0x5a00006  bltz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F5EACu;
    {
        const bool branch_taken_0x3f5eac = (GPR_S64(ctx, 13) < 0);
        ctx->pc = 0x3F5EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5EACu;
        // 0x3f5eb0: 0xe5000008  swc1        $f0, 0x8($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5eac) {
            ctx->pc = 0x3F5EC8u;
            goto label_3f5ec8;
        }
    }
    ctx->pc = 0x3F5EB4u;
    // 0x3f5eb4: 0x9443c  dsll32      $t0, $t1, 16
    ctx->pc = 0x3f5eb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 16));
    // 0x3f5eb8: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x3f5eb8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x3f5ebc: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F5EBCu;
    {
        const bool branch_taken_0x3f5ebc = (GPR_S64(ctx, 8) >= 0);
        if (branch_taken_0x3f5ebc) {
            ctx->pc = 0x3F5ED0u;
            goto label_3f5ed0;
        }
    }
    ctx->pc = 0x3F5EC4u;
    // 0x3f5ec4: 0x0  nop
    ctx->pc = 0x3f5ec4u;
    // NOP
label_3f5ec8:
    // 0x3f5ec8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3F5EC8u;
    {
        const bool branch_taken_0x3f5ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5ec8) {
            ctx->pc = 0x3F5FF0u;
            goto label_3f5ff0;
        }
    }
    ctx->pc = 0x3F5ED0u;
label_3f5ed0:
    // 0x3f5ed0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3f5ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3f5ed4: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x3F5ED4u;
    {
        const bool branch_taken_0x3f5ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5ED4u;
        // 0x3f5ed8: 0xd1900  sll         $v1, $t5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5ed4) {
            ctx->pc = 0x3F5FF0u;
            goto label_3f5ff0;
        }
    }
    ctx->pc = 0x3F5EDCu;
    // 0x3f5edc: 0x81500  sll         $v0, $t0, 20
    ctx->pc = 0x3f5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 20));
    // 0x3f5ee0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f5ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f5ee4: 0xa4a3c  dsll32      $t1, $t2, 8
    ctx->pc = 0x3f5ee4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 8));
    // 0x3f5ee8: 0xa1602  srl         $v0, $t2, 24
    ctx->pc = 0x3f5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x3f5eec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f5eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f5ef0: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x3f5ef0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f5ef4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x3f5ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3f5ef8: 0x94a3e  dsrl32      $t1, $t1, 8
    ctx->pc = 0x3f5ef8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 8));
    // 0x3f5efc: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x3f5efcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x3f5f00: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x3f5f00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3f5f04: 0x8c2efc90  lw          $t6, -0x370($at)
    ctx->pc = 0x3f5f04u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
    // 0x3f5f08: 0x3c082028  lui         $t0, 0x2028
    ctx->pc = 0x3f5f08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8232 << 16));
    // 0x3f5f0c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3f5f0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3f5f10: 0x350a0156  ori         $t2, $t0, 0x156
    ctx->pc = 0x3f5f10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)342);
    // 0x3f5f14: 0x240dfff0  addiu       $t5, $zero, -0x10
    ctx->pc = 0x3f5f14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3f5f18: 0x24887000  addiu       $t0, $a0, 0x7000
    ctx->pc = 0x3f5f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x3f5f1c: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x3f5f1cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
    // 0x3f5f20: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x3f5f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3f5f24: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x3f5f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3f5f28: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3f5f28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3f5f2c: 0x25c8000f  addiu       $t0, $t6, 0xF
    ctx->pc = 0x3f5f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), 15));
    // 0x3f5f30: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x3f5f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x3f5f34: 0x10d8024  and         $s0, $t0, $t5
    ctx->pc = 0x3f5f34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) & GPR_U64(ctx, 13));
    // 0x3f5f38: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3f5f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3f5f3c: 0xae0c0000  sw          $t4, 0x0($s0)
    ctx->pc = 0x3f5f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
    // 0x3f5f40: 0xa44025  or          $t0, $a1, $a0
    ctx->pc = 0x3f5f40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3f5f44: 0xae0a0004  sw          $t2, 0x4($s0)
    ctx->pc = 0x3f5f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 10));
    // 0x3f5f48: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f5f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f5f4c: 0xae090008  sw          $t1, 0x8($s0)
    ctx->pc = 0x3f5f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    // 0x3f5f50: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3f5f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3f5f54: 0xae080020  sw          $t0, 0x20($s0)
    ctx->pc = 0x3f5f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 8));
    // 0x3f5f58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f5f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5f5c: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x3f5f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x3f5f60: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x3f5f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x3f5f64: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x3f5f64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3f5f68: 0xae0b0018  sw          $t3, 0x18($s0)
    ctx->pc = 0x3f5f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 11));
    // 0x3f5f6c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3f5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f5f70: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3f5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x3f5f74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3f5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3f5f78: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x3f5f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x3f5f7c: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x3f5f7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f5f80: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x3f5f80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f5f84: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x3f5f84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3f5f88: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x3f5f88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f5f8c: 0x93a70050  lbu         $a3, 0x50($sp)
    ctx->pc = 0x3f5f8cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f5f90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3f5f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3f5f94: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x3f5f94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3f5f98: 0xfd3821  addu        $a3, $a3, $sp
    ctx->pc = 0x3f5f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x3f5f9c: 0x90ea0023  lbu         $t2, 0x23($a3)
    ctx->pc = 0x3f5f9cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 35)));
    // 0x3f5fa0: 0x90e90022  lbu         $t1, 0x22($a3)
    ctx->pc = 0x3f5fa0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x3f5fa4: 0x90e80021  lbu         $t0, 0x21($a3)
    ctx->pc = 0x3f5fa4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 33)));
    // 0x3f5fa8: 0xa5180  sll         $t2, $t2, 6
    ctx->pc = 0x3f5fa8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x3f5fac: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x3f5facu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3f5fb0: 0x90e70020  lbu         $a3, 0x20($a3)
    ctx->pc = 0x3f5fb0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3f5fb4: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x3f5fb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x3f5fb8: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x3f5fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3f5fbc: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x3f5fbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x3f5fc0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x3f5fc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3f5fc4: 0x73ac0  sll         $a3, $a3, 11
    ctx->pc = 0x3f5fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x3f5fc8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3f5fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3f5fcc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3f5fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3f5fd0: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3F5FD0u;
    SET_GPR_U32(ctx, 31, 0x3F5FD8u);
    ctx->pc = 0x3F5FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5FD0u;
    // 0x3f5fd4: 0xa202000f  sb          $v0, 0xF($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3F5FD0u, 0x3F5FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5FD8u;
label_3f5fd8:
    // 0x3f5fd8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3f5fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3f5fdc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x3f5fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3f5fe0: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x3f5fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x3f5fe4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f5fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f5fe8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f5fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f5fec: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x3f5fecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
label_3f5ff0:
    // 0x3f5ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f5ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f5ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f5ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f5ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F5FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FF8u;
        // 0x3f5ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6000u;
}
