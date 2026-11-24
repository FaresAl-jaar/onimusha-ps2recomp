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

// Function: sub_0027E8E0
// Address: 0x27e8e0 - 0x27eae4
void sub_0027E8E0_0x27e8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E8E0_0x27e8e0");
#endif

    switch (ctx->pc) {
        case 0x27e958u: goto label_27e958;
        case 0x27e9c8u: goto label_27e9c8;
        case 0x27e9ecu: goto label_27e9ec;
        default: break;
    }

    ctx->pc = 0x27e8e0u;

    // 0x27e8e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x27e8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x27e8e4: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x27e8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x27e8e8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27e8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x27e8ec: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x27e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x27e8f0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x27e8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x27e8f4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27e8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x27e8f8: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x27e8f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e8fc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27e8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x27e900: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27e900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x27e904: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x27e904u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e908: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27e908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x27e90c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27e90cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e910: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27e910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27e914: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27e914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e918: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27e91c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x27e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27e920: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27e920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27e924: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27e924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e928: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27e928u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27e92c: 0xa3a900bb  sb          $t1, 0xBB($sp)
    ctx->pc = 0x27e92cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 187), (uint8_t)GPR_U32(ctx, 9));
    // 0x27e930: 0xafa700bc  sw          $a3, 0xBC($sp)
    ctx->pc = 0x27e930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 7));
    // 0x27e934: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x27e934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27e938: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x27e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x27e93c: 0x90be0004  lbu         $fp, 0x4($a1)
    ctx->pc = 0x27e93cu;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27e940: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x27e940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x27e944: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e948: 0x8c760008  lw          $s6, 0x8($v1)
    ctx->pc = 0x27e948u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27e94c: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x27e94cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x27e950: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x27E950u;
    {
        const bool branch_taken_0x27e950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E950u;
        // 0x27e954: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e950) {
            ctx->pc = 0x27EA50u;
            goto label_27ea50;
        }
    }
    ctx->pc = 0x27E958u;
label_27e958:
    // 0x27e958: 0x32c30001  andi        $v1, $s6, 0x1
    ctx->pc = 0x27e958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x27e95c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x27E95Cu;
    {
        const bool branch_taken_0x27e95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e95c) {
            ctx->pc = 0x27EA38u;
            goto label_27ea38;
        }
    }
    ctx->pc = 0x27E964u;
    // 0x27e964: 0x97868920  lhu         $a2, -0x76E0($gp)
    ctx->pc = 0x27e964u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x27e968: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x27e968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x27e96c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27e970: 0x24840950  addiu       $a0, $a0, 0x950
    ctx->pc = 0x27e970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2384));
    // 0x27e974: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x27e974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x27e978: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x27e978u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27e97c: 0xa7828920  sh          $v0, -0x76E0($gp)
    ctx->pc = 0x27e97cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936864), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e980: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x27e980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27e984: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x27e984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e988: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x27e988u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x27e98c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x27e98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x27e990: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x27e990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x27e994: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27e994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27e998: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x27e998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27e99c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x27e99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x27e9a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27E9A0u;
    {
        const bool branch_taken_0x27e9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E9A0u;
        // 0x27e9a4: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e9a0) {
            ctx->pc = 0x27E9D0u;
            goto label_27e9d0;
        }
    }
    ctx->pc = 0x27E9A8u;
    // 0x27e9a8: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x27e9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x27e9ac: 0x2462ff80  addiu       $v0, $v1, -0x80
    ctx->pc = 0x27e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x27e9b0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x27e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x27e9b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27e9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27e9b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27e9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9bc: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x27e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x27e9c0: 0xc041442  jal         func_105108
    ctx->pc = 0x27E9C0u;
    SET_GPR_U32(ctx, 31, 0x27E9C8u);
    ctx->pc = 0x27E9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9C0u;
    // 0x27e9c4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x27E9C0u, 0x27E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9C8u;
label_27e9c8:
    // 0x27e9c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27E9C8u;
    {
        const bool branch_taken_0x27e9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e9c8) {
            ctx->pc = 0x27E9F0u;
            goto label_27e9f0;
        }
    }
    ctx->pc = 0x27E9D0u;
label_27e9d0:
    // 0x27e9d0: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x27e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x27e9d4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27e9d8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x27e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x27e9dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27e9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9e0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x27e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x27e9e4: 0xc041442  jal         func_105108
    ctx->pc = 0x27E9E4u;
    SET_GPR_U32(ctx, 31, 0x27E9ECu);
    ctx->pc = 0x27E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9E4u;
    // 0x27e9e8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x27E9E4u, 0x27E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9ECu;
label_27e9ec:
    // 0x27e9ec: 0x0  nop
    ctx->pc = 0x27e9ecu;
    // NOP
label_27e9f0:
    // 0x27e9f0: 0x27a300cc  addiu       $v1, $sp, 0xCC
    ctx->pc = 0x27e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x27e9f4: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x27e9f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27e9f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e9fc: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x27e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x27ea00: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x27ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x27ea04: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x27ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x27ea08: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x27ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x27ea0c: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x27ea0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ea10: 0xa2370004  sb          $s7, 0x4($s1)
    ctx->pc = 0x27ea10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 23));
    // 0x27ea14: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x27ea14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ea18: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27ea1c: 0xa2230007  sb          $v1, 0x7($s1)
    ctx->pc = 0x27ea1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x27ea20: 0xa2240040  sb          $a0, 0x40($s1)
    ctx->pc = 0x27ea20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x27ea24: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x27ea24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27ea28: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x27ea28u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x27ea2c: 0x93a300bb  lbu         $v1, 0xBB($sp)
    ctx->pc = 0x27ea2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 187)));
    // 0x27ea30: 0xa2230042  sb          $v1, 0x42($s1)
    ctx->pc = 0x27ea30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 3));
    // 0x27ea34: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x27ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_27ea38:
    // 0x27ea38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27ea38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27ea3c: 0x25e182a  slt         $v1, $s2, $fp
    ctx->pc = 0x27ea3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x27ea40: 0x16b042  srl         $s6, $s6, 1
    ctx->pc = 0x27ea40u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
    // 0x27ea44: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x27EA44u;
    {
        const bool branch_taken_0x27ea44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA44u;
        // 0x27ea48: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea44) {
            ctx->pc = 0x27E958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e958;
        }
    }
    ctx->pc = 0x27EA4Cu;
    // 0x27ea4c: 0x0  nop
    ctx->pc = 0x27ea4cu;
    // NOP
label_27ea50:
    // 0x27ea50: 0x8e6306b4  lw          $v1, 0x6B4($s3)
    ctx->pc = 0x27ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1716)));
    // 0x27ea54: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x27ea54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x27ea58: 0xae6306b4  sw          $v1, 0x6B4($s3)
    ctx->pc = 0x27ea58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1716), GPR_U32(ctx, 3));
    // 0x27ea5c: 0x928300c1  lbu         $v1, 0xC1($s4)
    ctx->pc = 0x27ea5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 193)));
    // 0x27ea60: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x27EA60u;
    {
        const bool branch_taken_0x27ea60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ea60) {
            ctx->pc = 0x27EAB0u;
            goto label_27eab0;
        }
    }
    ctx->pc = 0x27EA68u;
    // 0x27ea68: 0x928300c0  lbu         $v1, 0xC0($s4)
    ctx->pc = 0x27ea68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x27ea6c: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x27ea6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x27ea70: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x27EA70u;
    {
        const bool branch_taken_0x27ea70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ea70) {
            ctx->pc = 0x27EAB0u;
            goto label_27eab0;
        }
    }
    ctx->pc = 0x27EA78u;
    // 0x27ea78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ea7c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x27ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x27ea80: 0xa0600081  sb          $zero, 0x81($v1)
    ctx->pc = 0x27ea80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 129), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ea84: 0x928300c0  lbu         $v1, 0xC0($s4)
    ctx->pc = 0x27ea84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x27ea88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ea8c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x27ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x27ea90: 0xa0600082  sb          $zero, 0x82($v1)
    ctx->pc = 0x27ea90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 130), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ea94: 0x928300c0  lbu         $v1, 0xC0($s4)
    ctx->pc = 0x27ea94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x27ea98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ea9c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x27ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x27eaa0: 0xa0770083  sb          $s7, 0x83($v1)
    ctx->pc = 0x27eaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 131), (uint8_t)GPR_U32(ctx, 23));
    // 0x27eaa4: 0x928300c0  lbu         $v1, 0xC0($s4)
    ctx->pc = 0x27eaa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x27eaa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27eaac: 0xa28300c0  sb          $v1, 0xC0($s4)
    ctx->pc = 0x27eaacu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 192), (uint8_t)GPR_U32(ctx, 3));
label_27eab0:
    // 0x27eab0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27eab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27eab4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x27eab4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27eab8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27eabc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27eabcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27eac0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27eac0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27eac4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27eac4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27eac8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27eac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27eacc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27eaccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ead0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27ead0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ead4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27ead4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ead8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27ead8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27eadc: 0x3e00008  jr          $ra
    ctx->pc = 0x27EADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EADCu;
        // 0x27eae0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EAE4u;
}
