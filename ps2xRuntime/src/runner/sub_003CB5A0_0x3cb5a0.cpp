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

// Function: sub_003CB5A0
// Address: 0x3cb5a0 - 0x3cb848
void sub_003CB5A0_0x3cb5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CB5A0_0x3cb5a0");
#endif

    switch (ctx->pc) {
        case 0x3cb618u: goto label_3cb618;
        case 0x3cb720u: goto label_3cb720;
        case 0x3cb7bcu: goto label_3cb7bc;
        default: break;
    }

    ctx->pc = 0x3cb5a0u;

    // 0x3cb5a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3cb5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3cb5a4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3cb5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3cb5a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cb5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cb5ac: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3cb5acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3cb5b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cb5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cb5b4: 0x2463e420  addiu       $v1, $v1, -0x1BE0
    ctx->pc = 0x3cb5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960160));
    // 0x3cb5b8: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x3cb5b8u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x65E420u));
    // 0x3cb5bc: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x3cb5bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3cb5c0: 0x24c6e430  addiu       $a2, $a2, -0x1BD0
    ctx->pc = 0x3cb5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960176));
    // 0x3cb5c4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x3cb5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3cb5c8: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x3cb5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x3cb5cc: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x3cb5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x3cb5d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cb5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cb5d4: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x3cb5d4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x65E430u));
    // 0x3cb5d8: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x3cb5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x3cb5dc: 0x8c8606cc  lw          $a2, 0x6CC($a0)
    ctx->pc = 0x3cb5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x3cb5e0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x3cb5e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3cb5e4: 0xac8506cc  sw          $a1, 0x6CC($a0)
    ctx->pc = 0x3cb5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 5));
    // 0x3cb5e8: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3cb5e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3cb5ec: 0x10a3008e  beq         $a1, $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x3CB5ECu;
    {
        const bool branch_taken_0x3cb5ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5ECu;
        // 0x3cb5f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb5ec) {
            ctx->pc = 0x3CB828u;
            goto label_3cb828;
        }
    }
    ctx->pc = 0x3CB5F4u;
    // 0x3cb5f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cb5f8: 0x10a30045  beq         $a1, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3CB5F8u;
    {
        const bool branch_taken_0x3cb5f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cb5f8) {
            ctx->pc = 0x3CB710u;
            goto label_3cb710;
        }
    }
    ctx->pc = 0x3CB600u;
    // 0x3cb600: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CB600u;
    {
        const bool branch_taken_0x3cb600 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb600) {
            ctx->pc = 0x3CB610u;
            goto label_3cb610;
        }
    }
    ctx->pc = 0x3CB608u;
    // 0x3cb608: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x3CB608u;
    {
        const bool branch_taken_0x3cb608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb608) {
            ctx->pc = 0x3CB838u;
            goto label_3cb838;
        }
    }
    ctx->pc = 0x3CB610u;
label_3cb610:
    // 0x3cb610: 0xc06039c  jal         func_180E70
    ctx->pc = 0x3CB610u;
    SET_GPR_U32(ctx, 31, 0x3CB618u);
    ctx->pc = 0x3CB614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB610u;
    // 0x3cb614: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x3CB610u, 0x3CB618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB618u;
label_3cb618:
    // 0x3cb618: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3cb618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3cb61c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3cb61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3cb620: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3CB620u;
    {
        const bool branch_taken_0x3cb620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3cb620) {
            ctx->pc = 0x3CB648u;
            goto label_3cb648;
        }
    }
    ctx->pc = 0x3CB628u;
    // 0x3cb628: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cb628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb62c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cb62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cb630: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cb630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb634: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3cb634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3cb638: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3cb638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3cb63c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3cb63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3cb640: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3cb640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3cb644: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3cb644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_3cb648:
    // 0x3cb648: 0x92032b31  lbu         $v1, 0x2B31($s0)
    ctx->pc = 0x3cb648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11057)));
    // 0x3cb64c: 0x1060007a  beqz        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x3CB64Cu;
    {
        const bool branch_taken_0x3cb64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB64Cu;
        // 0x3cb650: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb64c) {
            ctx->pc = 0x3CB838u;
            goto label_3cb838;
        }
    }
    ctx->pc = 0x3CB654u;
    // 0x3cb654: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3cb654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3cb658: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3cb658u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x3cb65c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cb65cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3cb660: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cb660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cb664: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3cb664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cb668: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3CB668u;
    {
        const bool branch_taken_0x3cb668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb668) {
            ctx->pc = 0x3CB6B0u;
            goto label_3cb6b0;
        }
    }
    ctx->pc = 0x3CB670u;
    // 0x3cb670: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x3cb670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cb674: 0x3c034600  lui         $v1, 0x4600
    ctx->pc = 0x3cb674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17920 << 16));
    // 0x3cb678: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x3cb678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x3cb67c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cb67cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cb680: 0x0  nop
    ctx->pc = 0x3cb680u;
    // NOP
    // 0x3cb684: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3cb684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cb688: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x3CB688u;
    {
        const bool branch_taken_0x3cb688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb688) {
            ctx->pc = 0x3CB6B0u;
            goto label_3cb6b0;
        }
    }
    ctx->pc = 0x3CB690u;
    // 0x3cb690: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3cb690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cb694: 0x7e030870  sq          $v1, 0x870($s0)
    ctx->pc = 0x3cb694u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2160), GPR_VEC(ctx, 3));
    // 0x3cb698: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3cb698u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cb69c: 0x7e030880  sq          $v1, 0x880($s0)
    ctx->pc = 0x3cb69cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2176), GPR_VEC(ctx, 3));
    // 0x3cb6a0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3cb6a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cb6a4: 0x7e030890  sq          $v1, 0x890($s0)
    ctx->pc = 0x3cb6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2192), GPR_VEC(ctx, 3));
    // 0x3cb6a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3CB6A8u;
    {
        const bool branch_taken_0x3cb6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB6A8u;
        // 0x3cb6ac: 0xa600082a  sh          $zero, 0x82A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb6a8) {
            ctx->pc = 0x3CB6D0u;
            goto label_3cb6d0;
        }
    }
    ctx->pc = 0x3CB6B0u;
label_3cb6b0:
    // 0x3cb6b0: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x3cb6b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cb6b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cb6b8: 0x7e040870  sq          $a0, 0x870($s0)
    ctx->pc = 0x3cb6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2160), GPR_VEC(ctx, 4));
    // 0x3cb6bc: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x3cb6bcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cb6c0: 0x7e040880  sq          $a0, 0x880($s0)
    ctx->pc = 0x3cb6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2176), GPR_VEC(ctx, 4));
    // 0x3cb6c4: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x3cb6c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cb6c8: 0x7e040890  sq          $a0, 0x890($s0)
    ctx->pc = 0x3cb6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2192), GPR_VEC(ctx, 4));
    // 0x3cb6cc: 0xa603082a  sh          $v1, 0x82A($s0)
    ctx->pc = 0x3cb6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 3));
label_3cb6d0:
    // 0x3cb6d0: 0xa6002b32  sh          $zero, 0x2B32($s0)
    ctx->pc = 0x3cb6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11058), (uint16_t)GPR_U32(ctx, 0));
    // 0x3cb6d4: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3cb6d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3cb6d8: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x3cb6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x3cb6dc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3cb6dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cb6e0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3cb6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x3cb6e4: 0x24a50b8c  addiu       $a1, $a1, 0xB8C
    ctx->pc = 0x3cb6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2956));
    // 0x3cb6e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cb6ec: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x3cb6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3cb6f0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x3cb6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3cb6f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cb6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3cb6f8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3cb6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3cb6fc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3cb6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cb700: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3cb700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3cb704: 0xe6002b28  swc1        $f0, 0x2B28($s0)
    ctx->pc = 0x3cb704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11048), bits); }
    // 0x3cb708: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x3CB708u;
    {
        const bool branch_taken_0x3cb708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB708u;
        // 0x3cb70c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb708) {
            ctx->pc = 0x3CB838u;
            goto label_3cb838;
        }
    }
    ctx->pc = 0x3CB710u;
label_3cb710:
    // 0x3cb710: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3cb710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3cb714: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cb714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3cb718: 0xc0f2a20  jal         func_3CA880
    ctx->pc = 0x3CB718u;
    SET_GPR_U32(ctx, 31, 0x3CB720u);
    ctx->pc = 0x3CA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA880u, 0x3CB718u, 0x3CB720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB720u;
label_3cb720:
    // 0x3cb720: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cb720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cb724: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3CB724u;
    {
        const bool branch_taken_0x3cb724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cb724) {
            ctx->pc = 0x3CB790u;
            goto label_3cb790;
        }
    }
    ctx->pc = 0x3CB72Cu;
    // 0x3cb72c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3cb72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cb730: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3cb730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x3cb734: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3cb734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3cb738: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3cb738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3cb73c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cb73cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cb740: 0x0  nop
    ctx->pc = 0x3cb740u;
    // NOP
    // 0x3cb744: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3cb744u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3cb748: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cb748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cb74c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3CB74Cu;
    {
        const bool branch_taken_0x3cb74c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb74c) {
            ctx->pc = 0x3CB764u;
            goto label_3cb764;
        }
    }
    ctx->pc = 0x3CB754u;
    // 0x3cb754: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cb754u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cb758: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3cb758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3cb75c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CB75Cu;
    {
        const bool branch_taken_0x3cb75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB75Cu;
        // 0x3cb760: 0x96042b32  lhu         $a0, 0x2B32($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11058)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb75c) {
            ctx->pc = 0x3CB780u;
            goto label_3cb780;
        }
    }
    ctx->pc = 0x3CB764u;
label_3cb764:
    // 0x3cb764: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cb764u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3cb768: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cb768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cb76c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cb76cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cb770: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3cb770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3cb774: 0x0  nop
    ctx->pc = 0x3cb774u;
    // NOP
    // 0x3cb778: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3cb778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3cb77c: 0x96042b32  lhu         $a0, 0x2B32($s0)
    ctx->pc = 0x3cb77cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11058)));
label_3cb780:
    // 0x3cb780: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3cb780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cb784: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x3cb784u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3cb788: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x3CB788u;
    {
        const bool branch_taken_0x3cb788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB788u;
        // 0x3cb78c: 0xa6032b32  sh          $v1, 0x2B32($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11058), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb788) {
            ctx->pc = 0x3CB838u;
            goto label_3cb838;
        }
    }
    ctx->pc = 0x3CB790u;
label_3cb790:
    // 0x3cb790: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x3cb790u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3cb794: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3cb794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3cb798: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3cb798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cb79c: 0x24420b8c  addiu       $v0, $v0, 0xB8C
    ctx->pc = 0x3cb79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2956));
    // 0x3cb7a0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3cb7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3cb7a4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3cb7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3cb7a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cb7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cb7ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cb7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cb7b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3cb7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cb7b4: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3CB7B4u;
    SET_GPR_U32(ctx, 31, 0x3CB7BCu);
    ctx->pc = 0x3CB7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB7B4u;
    // 0x3cb7b8: 0xe6002b28  swc1        $f0, 0x2B28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11048), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3CB7B4u, 0x3CB7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB7BCu;
label_3cb7bc:
    // 0x3cb7bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3CB7BCu;
    {
        const bool branch_taken_0x3cb7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb7bc) {
            ctx->pc = 0x3CB7F0u;
            goto label_3cb7f0;
        }
    }
    ctx->pc = 0x3CB7C4u;
    // 0x3cb7c4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cb7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb7c8: 0x240300d0  addiu       $v1, $zero, 0xD0
    ctx->pc = 0x3cb7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x3cb7cc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cb7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb7d0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3cb7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3cb7d4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3cb7d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cb7d8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cb7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cb7dc: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3cb7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3cb7e0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3cb7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3cb7e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3CB7E4u;
    {
        const bool branch_taken_0x3cb7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB7E4u;
        // 0x3cb7e8: 0xae0307ec  sw          $v1, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb7e4) {
            ctx->pc = 0x3CB818u;
            goto label_3cb818;
        }
    }
    ctx->pc = 0x3CB7ECu;
    // 0x3cb7ec: 0x0  nop
    ctx->pc = 0x3cb7ecu;
    // NOP
label_3cb7f0:
    // 0x3cb7f0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cb7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb7f4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cb7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb7f8: 0x24030094  addiu       $v1, $zero, 0x94
    ctx->pc = 0x3cb7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x3cb7fc: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3cb7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cb800: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3cb800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3cb804: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3cb804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cb808: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cb808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cb80c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3cb80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3cb810: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3cb810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3cb814: 0x0  nop
    ctx->pc = 0x3cb814u;
    // NOP
label_3cb818:
    // 0x3cb818: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cb818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cb81c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3CB81Cu;
    {
        const bool branch_taken_0x3cb81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB81Cu;
        // 0x3cb820: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb81c) {
            ctx->pc = 0x3CB838u;
            goto label_3cb838;
        }
    }
    ctx->pc = 0x3CB824u;
    // 0x3cb824: 0x0  nop
    ctx->pc = 0x3cb824u;
    // NOP
label_3cb828:
    // 0x3cb828: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3cb828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3cb82c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CB82Cu;
    {
        const bool branch_taken_0x3cb82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB82Cu;
        // 0x3cb830: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb82c) {
            ctx->pc = 0x3CB838u;
            goto label_3cb838;
        }
    }
    ctx->pc = 0x3CB834u;
    // 0x3cb834: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3cb834u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3cb838:
    // 0x3cb838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cb838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cb83c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cb83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cb840: 0x3e00008  jr          $ra
    ctx->pc = 0x3CB840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB840u;
        // 0x3cb844: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CB848u;
}
