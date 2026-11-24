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

// Function: sub_001CDE10
// Address: 0x1cde10 - 0x1ce8c0
void sub_001CDE10_0x1cde10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDE10_0x1cde10");
#endif

    ctx->pc = 0x1cde10u;

    // 0x1cde10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cde10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cde14: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1cde14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1cde18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cde18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cde1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cde1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cde20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cde20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cde24: 0xc78180d4  lwc1        $f1, -0x7F2C($gp)
    ctx->pc = 0x1cde24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cde28: 0xc78487d4  lwc1        $f4, -0x782C($gp)
    ctx->pc = 0x1cde28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cde2c: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CDE2Cu;
    {
        const bool branch_taken_0x1cde2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE2Cu;
        // 0x1cde30: 0x278380dc  addiu       $v1, $gp, -0x7F24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934748));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde2c) {
            ctx->pc = 0x1CDE78u;
            goto label_1cde78;
        }
    }
    ctx->pc = 0x1CDE34u;
    // 0x1cde34: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1cde34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1cde38: 0x3c070004  lui         $a3, 0x4
    ctx->pc = 0x1cde38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
    // 0x1cde3c: 0x34b00040  ori         $s0, $a1, 0x40
    ctx->pc = 0x1cde3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x1cde40: 0x3c082402  lui         $t0, 0x2402
    ctx->pc = 0x1cde40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)9218 << 16));
    // 0x1cde44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1cde44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cde48: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x1cde48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1cde4c: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x1cde4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1cde50: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1cde50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1cde54: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1cde54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1cde58: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x1cde58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    // 0x1cde5c: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x1cde5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1cde60: 0x3405e001  ori         $a1, $zero, 0xE001
    ctx->pc = 0x1cde60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57345);
    // 0x1cde64: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1cde64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1cde68: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x1cde68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
    // 0x1cde6c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1CDE6Cu;
    {
        const bool branch_taken_0x1cde6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE6Cu;
        // 0x1cde70: 0xa9c825  or          $t9, $a1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde6c) {
            ctx->pc = 0x1CDEB8u;
            goto label_1cdeb8;
        }
    }
    ctx->pc = 0x1CDE74u;
    // 0x1cde74: 0x0  nop
    ctx->pc = 0x1cde74u;
    // NOP
label_1cde78:
    // 0x1cde78: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x1cde78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x1cde7c: 0x34a70080  ori         $a3, $a1, 0x80
    ctx->pc = 0x1cde7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1cde80: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x1cde80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cde84: 0x3c052402  lui         $a1, 0x2402
    ctx->pc = 0x1cde84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9218 << 16));
    // 0x1cde88: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1cde88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1cde8c: 0x34a50800  ori         $a1, $a1, 0x800
    ctx->pc = 0x1cde8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    // 0x1cde90: 0x3c100008  lui         $s0, 0x8
    ctx->pc = 0x1cde90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8 << 16));
    // 0x1cde94: 0xa84025  or          $t0, $a1, $t0
    ctx->pc = 0x1cde94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x1cde98: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1cde98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1cde9c: 0x34a90005  ori         $t1, $a1, 0x5
    ctx->pc = 0x1cde9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    // 0x1cdea0: 0x3405e001  ori         $a1, $zero, 0xE001
    ctx->pc = 0x1cdea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57345);
    // 0x1cdea4: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1cdea4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1cdea8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1cdea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1cdeac: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x1cdeacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
    // 0x1cdeb0: 0xa9c825  or          $t9, $a1, $t1
    ctx->pc = 0x1cdeb0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x1cdeb4: 0x0  nop
    ctx->pc = 0x1cdeb4u;
    // NOP
label_1cdeb8:
    // 0x1cdeb8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1cdeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1cdebc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1cdebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1cdec0: 0x5683c  dsll32      $t5, $a1, 0
    ctx->pc = 0x1cdec0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1cdec4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1cdec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1cdec8: 0x24097900  addiu       $t1, $zero, 0x7900
    ctx->pc = 0x1cdec8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1cdecc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1cdeccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1cded0: 0x9503c  dsll32      $t2, $t1, 0
    ctx->pc = 0x1cded0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1cded4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1cded4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1cded8: 0x24097000  addiu       $t1, $zero, 0x7000
    ctx->pc = 0x1cded8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1cdedc: 0xaf848b28  sw          $a0, -0x74D8($gp)
    ctx->pc = 0x1cdedcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 4));
    // 0x1cdee0: 0x12a5025  or          $t2, $t1, $t2
    ctx->pc = 0x1cdee0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1cdee4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1cdee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1cdee8: 0x248e0010  addiu       $t6, $a0, 0x10
    ctx->pc = 0x1cdee8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cdeec: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1cdeecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1cdef0: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x1cdef0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1cdef4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1cdef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1cdef8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cdef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdefc: 0xaf8e8b2c  sw          $t6, -0x74D4($gp)
    ctx->pc = 0x1cdefcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 14));
    // 0x1cdf00: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cdf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cdf04: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x1cdf04u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x1cdf08: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x1cdf08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1cdf0c: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x1cdf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x1cdf10: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x1cdf10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1cdf14: 0xaf848b30  sw          $a0, -0x74D0($gp)
    ctx->pc = 0x1cdf14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 4));
    // 0x1cdf18: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x1cdf18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x1cdf1c: 0xfc8b0018  sd          $t3, 0x18($a0)
    ctx->pc = 0x1cdf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 11));
    // 0x1cdf20: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cdf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cdf24: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1cdf24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1cdf28: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1cdf28u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x1cdf2c: 0x10c000bc  beqz        $a2, . + 4 + (0xBC << 2)
    ctx->pc = 0x1CDF2Cu;
    {
        const bool branch_taken_0x1cdf2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF2Cu;
        // 0x1cdf30: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf2c) {
            ctx->pc = 0x1CE220u;
            goto label_1ce220;
        }
    }
    ctx->pc = 0x1CDF34u;
    // 0x1cdf34: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x1cdf34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x1cdf38: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x1cdf38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1cdf3c: 0x3c073a00  lui         $a3, 0x3A00
    ctx->pc = 0x1cdf3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)14848 << 16));
    // 0x1cdf40: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1cdf40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1cdf44: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x1cdf44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1cdf48: 0x34e700c0  ori         $a3, $a3, 0xC0
    ctx->pc = 0x1cdf48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)192);
    // 0x1cdf4c: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x1cdf4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x1cdf50: 0x3c1100df  lui         $s1, 0xDF
    ctx->pc = 0x1cdf50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)223 << 16));
    // 0x1cdf54: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1cdf54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1cdf58: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x1cdf58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1cdf5c: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x1cdf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x1cdf60: 0x240c0007  addiu       $t4, $zero, 0x7
    ctx->pc = 0x1cdf60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cdf64: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cdf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cdf68: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x1cdf68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1cdf6c: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1cdf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1cdf70: 0x2406037c  addiu       $a2, $zero, 0x37C
    ctx->pc = 0x1cdf70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1cdf74: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x1cdf74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x1cdf78: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x1cdf78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1cdf7c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1cdf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1cdf80: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x1cdf80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x1cdf84: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x1cdf84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x1cdf88: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x1cdf88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x1cdf8c: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x1cdf8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x1cdf90: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cdf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cdf94: 0x34c7c00a  ori         $a3, $a2, 0xC00A
    ctx->pc = 0x1cdf94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49162);
    // 0x1cdf98: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x1cdf98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x1cdf9c: 0xe85025  or          $t2, $a3, $t0
    ctx->pc = 0x1cdf9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1cdfa0: 0x240b0048  addiu       $t3, $zero, 0x48
    ctx->pc = 0x1cdfa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cdfa4: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x1cdfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x1cdfa8: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x1cdfa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1cdfac: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x1cdfacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cdfb0: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x1cdfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x1cdfb4: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1cdfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1cdfb8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1cdfb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1cdfbc: 0x34e88080  ori         $t0, $a3, 0x8080
    ctx->pc = 0x1cdfbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x1cdfc0: 0x24090316  addiu       $t1, $zero, 0x316
    ctx->pc = 0x1cdfc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x1cdfc4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cdfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cdfc8: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x1cdfc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x1cdfcc: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x1cdfccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x1cdfd0: 0x34c60060  ori         $a2, $a2, 0x60
    ctx->pc = 0x1cdfd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)96);
    // 0x1cdfd4: 0x7c03c  dsll32      $t8, $a3, 0
    ctx->pc = 0x1cdfd4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1cdfd8: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x1cdfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x1cdfdc: 0xd83825  or          $a3, $a2, $t8
    ctx->pc = 0x1cdfdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 24));
    // 0x1cdfe0: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1cdfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x1cdfe4: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x1cdfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x1cdfe8: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1cdfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x1cdfec: 0xd82825  or          $a1, $a2, $t8
    ctx->pc = 0x1cdfecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 24));
    // 0x1cdff0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cdff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cdff4: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1cdff4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1cdff8: 0x240f0041  addiu       $t7, $zero, 0x41
    ctx->pc = 0x1cdff8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1cdffc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cdffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce000: 0xfc8f0008  sd          $t7, 0x8($a0)
    ctx->pc = 0x1ce000u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 15));
    // 0x1ce004: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x1ce004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ce008: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1ce008u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce00c: 0x3c057900  lui         $a1, 0x7900
    ctx->pc = 0x1ce00cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30976 << 16));
    // 0x1ce010: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1ce010u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x1ce014: 0x34a57000  ori         $a1, $a1, 0x7000
    ctx->pc = 0x1ce014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28672);
    // 0x1ce018: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce018u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce01c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1ce01cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1ce020: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce024: 0x70056b89  pcpyld      $t5, $zero, $a1
    ctx->pc = 0x1ce024u;
    SET_GPR_VEC(ctx, 13, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x1ce028: 0x3c050e00  lui         $a1, 0xE00
    ctx->pc = 0x1ce028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3584 << 16));
    // 0x1ce02c: 0x240c000d  addiu       $t4, $zero, 0xD
    ctx->pc = 0x1ce02cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ce030: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x1ce030u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x1ce034: 0x34ab2000  ori         $t3, $a1, 0x2000
    ctx->pc = 0x1ce034u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x1ce038: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x1ce038u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x1ce03c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ce03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1ce040: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x1ce040u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x1ce044: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1ce044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1ce048: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce048u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce04c: 0x70055389  pcpyld      $t2, $zero, $a1
    ctx->pc = 0x1ce04cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x1ce050: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce054: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1ce054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1ce058: 0x34a50020  ori         $a1, $a1, 0x20
    ctx->pc = 0x1ce058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
    // 0x1ce05c: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1ce05cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce060: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1ce060u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1ce064: 0xb82825  or          $a1, $a1, $t8
    ctx->pc = 0x1ce064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 24));
    // 0x1ce068: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1ce068u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x1ce06c: 0x363100c0  ori         $s1, $s1, 0xC0
    ctx->pc = 0x1ce06cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)192);
    // 0x1ce070: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1ce070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ce074: 0x2389025  or          $s2, $s1, $t8
    ctx->pc = 0x1ce074u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) | GPR_U64(ctx, 24));
    // 0x1ce078: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1ce078u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1ce07c: 0x3c1100ff  lui         $s1, 0xFF
    ctx->pc = 0x1ce07cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)255 << 16));
    // 0x1ce080: 0xfc8f0008  sd          $t7, 0x8($a0)
    ctx->pc = 0x1ce080u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 15));
    // 0x1ce084: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x1ce084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x1ce088: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1ce088u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x1ce08c: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x1ce08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x1ce090: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce090u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce094: 0xb84025  or          $t0, $a1, $t8
    ctx->pc = 0x1ce094u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 24));
    // 0x1ce098: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce09c: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x1ce09cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x1ce0a0: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x1ce0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x1ce0a4: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1ce0a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1ce0a8: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x1ce0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x1ce0ac: 0xb83025  or          $a2, $a1, $t8
    ctx->pc = 0x1ce0acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 24));
    // 0x1ce0b0: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x1ce0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x1ce0b4: 0x3c0500bf  lui         $a1, 0xBF
    ctx->pc = 0x1ce0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)191 << 16));
    // 0x1ce0b8: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce0bc: 0x34a500a0  ori         $a1, $a1, 0xA0
    ctx->pc = 0x1ce0bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)160);
    // 0x1ce0c0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce0c4: 0xb82825  or          $a1, $a1, $t8
    ctx->pc = 0x1ce0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 24));
    // 0x1ce0c8: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1ce0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1ce0cc: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1ce0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x1ce0d0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1ce0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ce0d4: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1ce0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1ce0d8: 0xfc8f0008  sd          $t7, 0x8($a0)
    ctx->pc = 0x1ce0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 15));
    // 0x1ce0dc: 0x362800e0  ori         $t0, $s1, 0xE0
    ctx->pc = 0x1ce0dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)224);
    // 0x1ce0e0: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1ce0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x1ce0e4: 0x118c025  or          $t8, $t0, $t8
    ctx->pc = 0x1ce0e4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 8) | GPR_U64(ctx, 24));
    // 0x1ce0e8: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce0ec: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x1ce0ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ce0f0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce0f4: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x1ce0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x1ce0f8: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x1ce0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x1ce0fc: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x1ce0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x1ce100: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce100u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce104: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce108: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1ce108u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1ce10c: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1ce10cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x1ce110: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1ce110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ce114: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x1ce114u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x1ce118: 0xfc8f0008  sd          $t7, 0x8($a0)
    ctx->pc = 0x1ce118u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 15));
    // 0x1ce11c: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1ce11cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x1ce120: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce120u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce124: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce128: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x1ce128u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x1ce12c: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x1ce12cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x1ce130: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x1ce130u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x1ce134: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce134u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce138: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce13c: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1ce13cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1ce140: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1ce140u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x1ce144: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1ce144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ce148: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1ce148u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1ce14c: 0xfc8f0008  sd          $t7, 0x8($a0)
    ctx->pc = 0x1ce14cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 15));
    // 0x1ce150: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1ce150u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x1ce154: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce154u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce158: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce15c: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x1ce15cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x1ce160: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x1ce160u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x1ce164: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x1ce164u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x1ce168: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce168u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce16c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce170: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1ce170u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1ce174: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1ce174u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x1ce178: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1ce178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ce17c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1ce17cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1ce180: 0xfc8f0008  sd          $t7, 0x8($a0)
    ctx->pc = 0x1ce180u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 15));
    // 0x1ce184: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1ce184u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x1ce188: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce188u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce18c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce190: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x1ce190u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x1ce194: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x1ce194u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x1ce198: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x1ce198u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x1ce19c: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce19cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce1a0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce1a4: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1ce1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1ce1a8: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1ce1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x1ce1ac: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1ce1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ce1b0: 0xfc920000  sd          $s2, 0x0($a0)
    ctx->pc = 0x1ce1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 18));
    // 0x1ce1b4: 0xfc8f0008  sd          $t7, 0x8($a0)
    ctx->pc = 0x1ce1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 15));
    // 0x1ce1b8: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1ce1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x1ce1bc: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce1c0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce1c4: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x1ce1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x1ce1c8: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x1ce1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x1ce1cc: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x1ce1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x1ce1d0: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce1d4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce1d8: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1ce1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1ce1dc: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1ce1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x1ce1e0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1ce1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ce1e4: 0xfc980000  sd          $t8, 0x0($a0)
    ctx->pc = 0x1ce1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 24));
    // 0x1ce1e8: 0xfc8f0008  sd          $t7, 0x8($a0)
    ctx->pc = 0x1ce1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 15));
    // 0x1ce1ec: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1ce1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x1ce1f0: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce1f4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce1f8: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x1ce1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x1ce1fc: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x1ce1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x1ce200: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x1ce200u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x1ce204: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce204u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce208: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce20c: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1ce20cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1ce210: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1ce210u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x1ce214: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1ce214u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x1ce218: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1ce218u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1ce21c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1ce220:
    // 0x1ce220: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ce220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce224: 0x3c063a00  lui         $a2, 0x3A00
    ctx->pc = 0x1ce224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)14848 << 16));
    // 0x1ce228: 0xfc900000  sd          $s0, 0x0($a0)
    ctx->pc = 0x1ce228u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 16));
    // 0x1ce22c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ce22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ce230: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x1ce230u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1ce234: 0x34c600c0  ori         $a2, $a2, 0xC0
    ctx->pc = 0x1ce234u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)192);
    // 0x1ce238: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1ce238u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x1ce23c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x1ce23cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x1ce240: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1ce240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1ce244: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1ce244u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1ce248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce24c: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x1ce24cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x1ce250: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1ce250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ce254: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce258: 0x24090061  addiu       $t1, $zero, 0x61
    ctx->pc = 0x1ce258u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1ce25c: 0xfc990000  sd          $t9, 0x0($a0)
    ctx->pc = 0x1ce25cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 25));
    // 0x1ce260: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1ce260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ce264: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x1ce264u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x1ce268: 0x240501bc  addiu       $a1, $zero, 0x1BC
    ctx->pc = 0x1ce268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x1ce26c: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x1ce26cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
    // 0x1ce270: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x1ce270u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ce274: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x1ce274u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x1ce278: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1ce278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1ce27c: 0x34a5c00a  ori         $a1, $a1, 0xC00A
    ctx->pc = 0x1ce27cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49162);
    // 0x1ce280: 0x3c0b0003  lui         $t3, 0x3
    ctx->pc = 0x1ce280u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
    // 0x1ce284: 0xa84825  or          $t1, $a1, $t0
    ctx->pc = 0x1ce284u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x1ce288: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce28c: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x1ce28cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ce290: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x1ce290u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x1ce294: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x1ce294u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x1ce298: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x1ce298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ce29c: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x1ce29cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
    // 0x1ce2a0: 0x24050356  addiu       $a1, $zero, 0x356
    ctx->pc = 0x1ce2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x1ce2a4: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1ce2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1ce2a8: 0x240a0043  addiu       $t2, $zero, 0x43
    ctx->pc = 0x1ce2a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ce2ac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce2b0: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x1ce2b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ce2b4: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1ce2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1ce2b8: 0x85c38  dsll        $t3, $t0, 16
    ctx->pc = 0x1ce2b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << 16);
    // 0x1ce2bc: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x1ce2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x1ce2c0: 0x3c0800df  lui         $t0, 0xDF
    ctx->pc = 0x1ce2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)223 << 16));
    // 0x1ce2c4: 0x906c0003  lbu         $t4, 0x3($v1)
    ctx->pc = 0x1ce2c4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1ce2c8: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x1ce2c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1ce2cc: 0x3c0801ff  lui         $t0, 0x1FF
    ctx->pc = 0x1ce2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)511 << 16));
    // 0x1ce2d0: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x1ce2d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1ce2d4: 0x24080041  addiu       $t0, $zero, 0x41
    ctx->pc = 0x1ce2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ce2d8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ce2d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce2dc: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x1ce2dcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x1ce2e0: 0x358c0064  ori         $t4, $t4, 0x64
    ctx->pc = 0x1ce2e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)100);
    // 0x1ce2e4: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x1ce2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x1ce2e8: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x1ce2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x1ce2ec: 0x906d0001  lbu         $t5, 0x1($v1)
    ctx->pc = 0x1ce2ecu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1ce2f0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce2f4: 0x906a0002  lbu         $t2, 0x2($v1)
    ctx->pc = 0x1ce2f4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ce2f8: 0x906c0000  lbu         $t4, 0x0($v1)
    ctx->pc = 0x1ce2f8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ce2fc: 0xd6a38  dsll        $t5, $t5, 8
    ctx->pc = 0x1ce2fcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 8);
    // 0x1ce300: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1ce300u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1ce304: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x1ce304u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x1ce308: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x1ce308u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x1ce30c: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1ce30cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1ce310: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1ce310u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1ce314: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1ce314u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1ce318: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x1ce318u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
    // 0x1ce31c: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1ce31cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1ce320: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE320u;
    {
        const bool branch_taken_0x1ce320 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE320u;
        // 0x1ce324: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce320) {
            ctx->pc = 0x1CE338u;
            goto label_1ce338;
        }
    }
    ctx->pc = 0x1CE328u;
    // 0x1ce328: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x1ce328u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce32c: 0x450100c4  bc1t        . + 4 + (0xC4 << 2)
    ctx->pc = 0x1CE32Cu;
    {
        const bool branch_taken_0x1ce32c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce32c) {
            ctx->pc = 0x1CE640u;
            goto label_1ce640;
        }
    }
    ctx->pc = 0x1CE334u;
    // 0x1ce334: 0x0  nop
    ctx->pc = 0x1ce334u;
    // NOP
label_1ce338:
    // 0x1ce338: 0x3c05457a  lui         $a1, 0x457A
    ctx->pc = 0x1ce338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17786 << 16));
    // 0x1ce33c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1ce33cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ce340: 0x0  nop
    ctx->pc = 0x1ce340u;
    // NOP
    // 0x1ce344: 0x46030943  div.s       $f5, $f1, $f3
    ctx->pc = 0x1ce344u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1ce348: 0x3c0542e0  lui         $a1, 0x42E0
    ctx->pc = 0x1ce348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17120 << 16));
    // 0x1ce34c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ce34cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce350: 0x0  nop
    ctx->pc = 0x1ce350u;
    // NOP
    // 0x1ce354: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x1ce354u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1ce358: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x1ce358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x1ce35c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ce35cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce360: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce364: 0x0  nop
    ctx->pc = 0x1ce364u;
    // NOP
    // 0x1ce368: 0x46011183  div.s       $f6, $f2, $f1
    ctx->pc = 0x1ce368u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1ce36c: 0x0  nop
    ctx->pc = 0x1ce36cu;
    // NOP
    // 0x1ce370: 0x0  nop
    ctx->pc = 0x1ce370u;
    // NOP
    // 0x1ce374: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x1ce374u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce378: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
    ctx->pc = 0x1CE378u;
    {
        const bool branch_taken_0x1ce378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce378) {
            ctx->pc = 0x1CE530u;
            goto label_1ce530;
        }
    }
    ctx->pc = 0x1CE380u;
    // 0x1ce380: 0x0  nop
    ctx->pc = 0x1ce380u;
    // NOP
    // 0x1ce384: 0x0  nop
    ctx->pc = 0x1ce384u;
    // NOP
    // 0x1ce388: 0x46032083  div.s       $f2, $f4, $f3
    ctx->pc = 0x1ce388u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x1ce38c: 0x3c0b4360  lui         $t3, 0x4360
    ctx->pc = 0x1ce38cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17248 << 16));
    // 0x1ce390: 0x3c0a4380  lui         $t2, 0x4380
    ctx->pc = 0x1ce390u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17280 << 16));
    // 0x1ce394: 0x24050254  addiu       $a1, $zero, 0x254
    ctx->pc = 0x1ce394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 596));
    // 0x1ce398: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1ce398u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1ce39c: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x1ce39cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce3a0: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1ce3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1ce3a4: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x1ce3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x1ce3a8: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1ce3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1ce3ac: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ce3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ce3b0: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x1ce3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x1ce3b4: 0x3c083b00  lui         $t0, 0x3B00
    ctx->pc = 0x1ce3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15104 << 16));
    // 0x1ce3b8: 0x90700001  lbu         $s0, 0x1($v1)
    ctx->pc = 0x1ce3b8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1ce3bc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1ce3bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ce3c0: 0x906f0000  lbu         $t7, 0x0($v1)
    ctx->pc = 0x1ce3c0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ce3c4: 0x3c073b80  lui         $a3, 0x3B80
    ctx->pc = 0x1ce3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15232 << 16));
    // 0x1ce3c8: 0x906c0002  lbu         $t4, 0x2($v1)
    ctx->pc = 0x1ce3c8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ce3cc: 0x9303c  dsll32      $a2, $t1, 0
    ctx->pc = 0x1ce3ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1ce3d0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce3d4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1ce3d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce3d8: 0x24180004  addiu       $t8, $zero, 0x4
    ctx->pc = 0x1ce3d8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce3dc: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x1ce3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x1ce3e0: 0x667025  or          $t6, $v1, $a2
    ctx->pc = 0x1ce3e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ce3e4: 0x102a38  dsll        $a1, $s0, 8
    ctx->pc = 0x1ce3e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << 8);
    // 0x1ce3e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ce3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ce3ec: 0x1e57825  or          $t7, $t7, $a1
    ctx->pc = 0x1ce3ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 5));
    // 0x1ce3f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ce3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ce3f4: 0x3c103f61  lui         $s0, 0x3F61
    ctx->pc = 0x1ce3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16225 << 16));
    // 0x1ce3f8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1ce3f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ce3fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ce3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce400: 0xc1c38  dsll        $v1, $t4, 16
    ctx->pc = 0x1ce400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 16);
    // 0x1ce404: 0x6f7825  or          $t7, $v1, $t7
    ctx->pc = 0x1ce404u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
    // 0x1ce408: 0x3c0c7900  lui         $t4, 0x7900
    ctx->pc = 0x1ce408u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)30976 << 16));
    // 0x1ce40c: 0x35837000  ori         $v1, $t4, 0x7000
    ctx->pc = 0x1ce40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)28672);
    // 0x1ce410: 0x1ee7025  or          $t6, $t7, $t6
    ctx->pc = 0x1ce410u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x1ce414: 0xfc8e0000  sd          $t6, 0x0($a0)
    ctx->pc = 0x1ce414u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 14));
    // 0x1ce418: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1ce418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1ce41c: 0x358c9000  ori         $t4, $t4, 0x9000
    ctx->pc = 0x1ce41cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)36864);
    // 0x1ce420: 0xfc8d0008  sd          $t5, 0x8($a0)
    ctx->pc = 0x1ce420u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 13));
    // 0x1ce424: 0x1856025  or          $t4, $t4, $a1
    ctx->pc = 0x1ce424u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 5));
    // 0x1ce428: 0x352e4000  ori         $t6, $t1, 0x4000
    ctx->pc = 0x1ce428u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16384);
    // 0x1ce42c: 0x700c6b89  pcpyld      $t5, $zero, $t4
    ctx->pc = 0x1ce42cu;
    SET_GPR_VEC(ctx, 13, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 12)));
    // 0x1ce430: 0x340c8700  ori         $t4, $zero, 0x8700
    ctx->pc = 0x1ce430u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1ce434: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x1ce434u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x1ce438: 0x358f7000  ori         $t7, $t4, 0x7000
    ctx->pc = 0x1ce438u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)28672);
    // 0x1ce43c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1ce43cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1ce440: 0x358c9000  ori         $t4, $t4, 0x9000
    ctx->pc = 0x1ce440u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)36864);
    // 0x1ce444: 0x1e57825  or          $t7, $t7, $a1
    ctx->pc = 0x1ce444u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 5));
    // 0x1ce448: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x1ce448u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce44c: 0x1852825  or          $a1, $t4, $a1
    ctx->pc = 0x1ce44cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) | GPR_U64(ctx, 5));
    // 0x1ce450: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1ce450u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce454: 0x0  nop
    ctx->pc = 0x1ce454u;
    // NOP
    // 0x1ce458: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ce458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ce45c: 0x700f6389  pcpyld      $t4, $zero, $t7
    ctx->pc = 0x1ce45cu;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1ce460: 0x70052b89  pcpyld      $a1, $zero, $a1
    ctx->pc = 0x1ce460u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x1ce464: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1ce464u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ce468: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1ce468u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce46c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1ce46cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce470: 0x0  nop
    ctx->pc = 0x1ce470u;
    // NOP
    // 0x1ce474: 0x46020902  mul.s       $f4, $f1, $f2
    ctx->pc = 0x1ce474u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ce478: 0x46050882  mul.s       $f2, $f1, $f5
    ctx->pc = 0x1ce478u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1ce47c: 0x46030942  mul.s       $f5, $f1, $f3
    ctx->pc = 0x1ce47cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1ce480: 0x460608c2  mul.s       $f3, $f1, $f6
    ctx->pc = 0x1ce480u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1ce484: 0x46020200  add.s       $f8, $f0, $f2
    ctx->pc = 0x1ce484u;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ce488: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1ce488u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce48c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ce48cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce490: 0x0  nop
    ctx->pc = 0x1ce490u;
    // NOP
    // 0x1ce494: 0x460309c0  add.s       $f7, $f1, $f3
    ctx->pc = 0x1ce494u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1ce498: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x1ce498u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1ce49c: 0x46044041  sub.s       $f1, $f8, $f4
    ctx->pc = 0x1ce49cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x1ce4a0: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x1ce4a0u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce4a4: 0x0  nop
    ctx->pc = 0x1ce4a4u;
    // NOP
    // 0x1ce4a8: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1ce4a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1ce4ac: 0x46020181  sub.s       $f6, $f0, $f2
    ctx->pc = 0x1ce4acu;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1ce4b0: 0x46053840  add.s       $f1, $f7, $f5
    ctx->pc = 0x1ce4b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x1ce4b4: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x1ce4b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1ce4b8: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x1ce4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x1ce4bc: 0x46044000  add.s       $f0, $f8, $f4
    ctx->pc = 0x1ce4bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x1ce4c0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce4c4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1ce4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1ce4c8: 0xfc980008  sd          $t8, 0x8($a0)
    ctx->pc = 0x1ce4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 24));
    // 0x1ce4cc: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1ce4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1ce4d0: 0x46051840  add.s       $f1, $f3, $f5
    ctx->pc = 0x1ce4d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x1ce4d4: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x1ce4d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1ce4d8: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x1ce4d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x1ce4dc: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x1ce4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x1ce4e0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce4e4: 0xfc8c0000  sd          $t4, 0x0($a0)
    ctx->pc = 0x1ce4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 12));
    // 0x1ce4e8: 0xfc980008  sd          $t8, 0x8($a0)
    ctx->pc = 0x1ce4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 24));
    // 0x1ce4ec: 0x460430c1  sub.s       $f3, $f6, $f4
    ctx->pc = 0x1ce4ecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x1ce4f0: 0x46053881  sub.s       $f2, $f7, $f5
    ctx->pc = 0x1ce4f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x1ce4f4: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x1ce4f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1ce4f8: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x1ce4f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1ce4fc: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x1ce4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x1ce500: 0x46043040  add.s       $f1, $f6, $f4
    ctx->pc = 0x1ce500u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x1ce504: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce508: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x1ce508u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x1ce50c: 0xfc980008  sd          $t8, 0x8($a0)
    ctx->pc = 0x1ce50cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 24));
    // 0x1ce510: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1ce510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1ce514: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1ce514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1ce518: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x1ce518u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x1ce51c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce520: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1ce520u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1ce524: 0xfc980008  sd          $t8, 0x8($a0)
    ctx->pc = 0x1ce524u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 24));
    // 0x1ce528: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1CE528u;
    {
        const bool branch_taken_0x1ce528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE528u;
        // 0x1ce52c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce528) {
            ctx->pc = 0x1CE700u;
            goto label_1ce700;
        }
    }
    ctx->pc = 0x1CE530u;
label_1ce530:
    // 0x1ce530: 0x24050256  addiu       $a1, $zero, 0x256
    ctx->pc = 0x1ce530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x1ce534: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1ce534u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1ce538: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1ce538u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce53c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1ce53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1ce540: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x1ce540u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x1ce544: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1ce544u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce548: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1ce548u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1ce54c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ce54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ce550: 0x3c0b3b00  lui         $t3, 0x3B00
    ctx->pc = 0x1ce550u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)15104 << 16));
    // 0x1ce554: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x1ce554u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x1ce558: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1ce558u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1ce55c: 0x906a0001  lbu         $t2, 0x1($v1)
    ctx->pc = 0x1ce55cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1ce560: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1ce560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ce564: 0x90690000  lbu         $t1, 0x0($v1)
    ctx->pc = 0x1ce564u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ce568: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x1ce568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1ce56c: 0x90680002  lbu         $t0, 0x2($v1)
    ctx->pc = 0x1ce56cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ce570: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce574: 0x46060902  mul.s       $f4, $f1, $f6
    ctx->pc = 0x1ce574u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1ce578: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x1ce578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x1ce57c: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x1ce57cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce580: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1ce580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ce584: 0x34e34000  ori         $v1, $a3, 0x4000
    ctx->pc = 0x1ce584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x1ce588: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ce588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce58c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce58cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce590: 0x83c38  dsll        $a3, $t0, 16
    ctx->pc = 0x1ce590u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << 16);
    // 0x1ce594: 0x460508c0  add.s       $f3, $f1, $f5
    ctx->pc = 0x1ce594u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1ce598: 0xa1a38  dsll        $v1, $t2, 8
    ctx->pc = 0x1ce598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << 8);
    // 0x1ce59c: 0x1236025  or          $t4, $t1, $v1
    ctx->pc = 0x1ce59cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x1ce5a0: 0x3c0a3b80  lui         $t2, 0x3B80
    ctx->pc = 0x1ce5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15232 << 16));
    // 0x1ce5a4: 0xec3825  or          $a3, $a3, $t4
    ctx->pc = 0x1ce5a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
    // 0x1ce5a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ce5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ce5ac: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1ce5acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1ce5b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ce5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ce5b4: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1ce5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1ce5b8: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x1ce5b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ce5bc: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1ce5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x1ce5c0: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x1ce5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x1ce5c4: 0x34637000  ori         $v1, $v1, 0x7000
    ctx->pc = 0x1ce5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x1ce5c8: 0x3c053f61  lui         $a1, 0x3F61
    ctx->pc = 0x1ce5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16225 << 16));
    // 0x1ce5cc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1ce5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1ce5d0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1ce5d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce5d4: 0x70033b89  pcpyld      $a3, $zero, $v1
    ctx->pc = 0x1ce5d4u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1ce5d8: 0x46050041  sub.s       $f1, $f0, $f5
    ctx->pc = 0x1ce5d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x1ce5dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ce5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce5e0: 0x34038700  ori         $v1, $zero, 0x8700
    ctx->pc = 0x1ce5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1ce5e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ce5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ce5e8: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1ce5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1ce5ec: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x1ce5ecu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ce5f0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1ce5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1ce5f4: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x1ce5f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1ce5f8: 0x46041000  add.s       $f0, $f2, $f4
    ctx->pc = 0x1ce5f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1ce5fc: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1ce5fcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1ce600: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1ce600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1ce604: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ce604u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce608: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1ce608u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1ce60c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce610: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x1ce610u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x1ce614: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1ce614u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1ce618: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1ce618u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1ce61c: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1ce61cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1ce620: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1ce620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1ce624: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1ce624u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1ce628: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce62c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1ce62cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1ce630: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1ce630u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1ce634: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1CE634u;
    {
        const bool branch_taken_0x1ce634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE634u;
        // 0x1ce638: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce634) {
            ctx->pc = 0x1CE700u;
            goto label_1ce700;
        }
    }
    ctx->pc = 0x1CE63Cu;
    // 0x1ce63c: 0x0  nop
    ctx->pc = 0x1ce63cu;
    // NOP
label_1ce640:
    // 0x1ce640: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1ce640u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1ce644: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x1ce644u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x1ce648: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ce648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ce64c: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1ce64cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x1ce650: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1ce650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ce654: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x1ce654u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x1ce658: 0x1656025  or          $t4, $t3, $a1
    ctx->pc = 0x1ce658u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x1ce65c: 0x90680001  lbu         $t0, 0x1($v1)
    ctx->pc = 0x1ce65cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1ce660: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1ce660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1ce664: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x1ce664u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ce668: 0x34ab0008  ori         $t3, $a1, 0x8
    ctx->pc = 0x1ce668u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x1ce66c: 0x906d0002  lbu         $t5, 0x2($v1)
    ctx->pc = 0x1ce66cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ce670: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce674: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1ce674u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce678: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ce678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ce67c: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x1ce67cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ce680: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x1ce680u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ce684: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x1ce684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x1ce688: 0x82a38  dsll        $a1, $t0, 8
    ctx->pc = 0x1ce688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << 8);
    // 0x1ce68c: 0x34637000  ori         $v1, $v1, 0x7000
    ctx->pc = 0x1ce68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x1ce690: 0xc57025  or          $t6, $a2, $a1
    ctx->pc = 0x1ce690u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1ce694: 0x694025  or          $t0, $v1, $t1
    ctx->pc = 0x1ce694u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x1ce698: 0xd2c38  dsll        $a1, $t5, 16
    ctx->pc = 0x1ce698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) << 16);
    // 0x1ce69c: 0x3c030708  lui         $v1, 0x708
    ctx->pc = 0x1ce69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1800 << 16));
    // 0x1ce6a0: 0xae6825  or          $t5, $a1, $t6
    ctx->pc = 0x1ce6a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) | GPR_U64(ctx, 14));
    // 0x1ce6a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ce6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce6a8: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x1ce6a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x1ce6ac: 0x34651008  ori         $a1, $v1, 0x1008
    ctx->pc = 0x1ce6acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4104);
    // 0x1ce6b0: 0xfc8c0000  sd          $t4, 0x0($a0)
    ctx->pc = 0x1ce6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 12));
    // 0x1ce6b4: 0x34038700  ori         $v1, $zero, 0x8700
    ctx->pc = 0x1ce6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1ce6b8: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1ce6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1ce6bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ce6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ce6c0: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x1ce6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x1ce6c4: 0x70084389  pcpyld      $t0, $zero, $t0
    ctx->pc = 0x1ce6c4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1ce6c8: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x1ce6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x1ce6cc: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1ce6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1ce6d0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce6d4: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x1ce6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x1ce6d8: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1ce6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1ce6dc: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1ce6dcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1ce6e0: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1ce6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1ce6e4: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x1ce6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x1ce6e8: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x1ce6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x1ce6ec: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce6f0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1ce6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1ce6f4: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1ce6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1ce6f8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1ce6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ce6fc: 0x0  nop
    ctx->pc = 0x1ce6fcu;
    // NOP
label_1ce700:
    // 0x1ce700: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x1ce700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x1ce704: 0x346500c0  ori         $a1, $v1, 0xC0
    ctx->pc = 0x1ce704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x1ce708: 0x3c0b0005  lui         $t3, 0x5
    ctx->pc = 0x1ce708u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)5 << 16));
    // 0x1ce70c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1ce70cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1ce710: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x1ce710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1ce714: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1ce714u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1ce718: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ce718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ce71c: 0x8c2ff014  lw          $t7, -0xFEC($at)
    ctx->pc = 0x1ce71cu;
    SET_GPR_S32(ctx, 15, (int32_t)FAST_READ32(0x81F014u));
    // 0x1ce720: 0x3c0500df  lui         $a1, 0xDF
    ctx->pc = 0x1ce720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)223 << 16));
    // 0x1ce724: 0x240e0019  addiu       $t6, $zero, 0x19
    ctx->pc = 0x1ce724u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1ce728: 0x240d0009  addiu       $t5, $zero, 0x9
    ctx->pc = 0x1ce728u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ce72c: 0x356c020b  ori         $t4, $t3, 0x20B
    ctx->pc = 0x1ce72cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)523);
    // 0x1ce730: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x1ce730u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ce734: 0x24090061  addiu       $t1, $zero, 0x61
    ctx->pc = 0x1ce734u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1ce738: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x1ce738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ce73c: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x1ce73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x1ce740: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1ce740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ce744: 0x653825  or          $a3, $v1, $a1
    ctx->pc = 0x1ce744u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1ce748: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x1ce748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ce74c: 0xddef0040  ld          $t7, 0x40($t7)
    ctx->pc = 0x1ce74cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 15), 64)));
    // 0x1ce750: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1ce750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ce754: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce758: 0xfc8f0010  sd          $t7, 0x10($a0)
    ctx->pc = 0x1ce758u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 15));
    // 0x1ce75c: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1ce75cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1ce760: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce764: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x1ce764u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x1ce768: 0xfc8d0008  sd          $t5, 0x8($a0)
    ctx->pc = 0x1ce768u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 13));
    // 0x1ce76c: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x1ce76cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x1ce770: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x1ce770u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x1ce774: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce778: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x1ce778u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x1ce77c: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x1ce77cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x1ce780: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1ce780u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1ce784: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x1ce784u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x1ce788: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce78c: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x1ce78cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x1ce790: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1ce790u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x1ce794: 0x8f878b30  lw          $a3, -0x74D0($gp)
    ctx->pc = 0x1ce794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1ce798: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x1ce798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ce79c: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x1ce79cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x1ce7a0: 0x52e82  srl         $a1, $a1, 26
    ctx->pc = 0x1ce7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 26));
    // 0x1ce7a4: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x1ce7a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x1ce7a8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CE7A8u;
    {
        const bool branch_taken_0x1ce7a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CE7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7A8u;
        // 0x1ce7ac: 0x30c6000f  andi        $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7a8) {
            ctx->pc = 0x1CE7F8u;
            goto label_1ce7f8;
        }
    }
    ctx->pc = 0x1CE7B0u;
    // 0x1ce7b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ce7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce7b4: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE7B4u;
    {
        const bool branch_taken_0x1ce7b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ce7b4) {
            ctx->pc = 0x1CE7D0u;
            goto label_1ce7d0;
        }
    }
    ctx->pc = 0x1CE7BCu;
    // 0x1ce7bc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE7BCu;
    {
        const bool branch_taken_0x1ce7bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7bc) {
            ctx->pc = 0x1CE7D0u;
            goto label_1ce7d0;
        }
    }
    ctx->pc = 0x1CE7C4u;
    // 0x1ce7c4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1CE7C4u;
    {
        const bool branch_taken_0x1ce7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7c4) {
            ctx->pc = 0x1CE830u;
            goto label_1ce830;
        }
    }
    ctx->pc = 0x1CE7CCu;
    // 0x1ce7cc: 0x0  nop
    ctx->pc = 0x1ce7ccu;
    // NOP
label_1ce7d0:
    // 0x1ce7d0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ce7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ce7d4: 0x471823  subu        $v1, $v0, $a3
    ctx->pc = 0x1ce7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ce7d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE7D8u;
    {
        const bool branch_taken_0x1ce7d8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7D8u;
        // 0x1ce7dc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7d8) {
            ctx->pc = 0x1CE7E8u;
            goto label_1ce7e8;
        }
    }
    ctx->pc = 0x1CE7E0u;
    // 0x1ce7e0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ce7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ce7e4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ce7e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ce7e8:
    // 0x1ce7e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ce7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ce7ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CE7ECu;
    {
        const bool branch_taken_0x1ce7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7ECu;
        // 0x1ce7f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7ec) {
            ctx->pc = 0x1CE830u;
            goto label_1ce830;
        }
    }
    ctx->pc = 0x1CE7F4u;
    // 0x1ce7f4: 0x0  nop
    ctx->pc = 0x1ce7f4u;
    // NOP
label_1ce7f8:
    // 0x1ce7f8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ce7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ce7fc: 0x471823  subu        $v1, $v0, $a3
    ctx->pc = 0x1ce7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ce800: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE800u;
    {
        const bool branch_taken_0x1ce800 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CE804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE800u;
        // 0x1ce804: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce800) {
            ctx->pc = 0x1CE810u;
            goto label_1ce810;
        }
    }
    ctx->pc = 0x1CE808u;
    // 0x1ce808: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ce808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ce80c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ce80cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ce810:
    // 0x1ce810: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ce810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ce814: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ce814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ce818: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x1ce818u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ce81c: 0x0  nop
    ctx->pc = 0x1ce81cu;
    // NOP
    // 0x1ce820: 0x0  nop
    ctx->pc = 0x1ce820u;
    // NOP
    // 0x1ce824: 0x1012  mflo        $v0
    ctx->pc = 0x1ce824u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ce828: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ce828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ce82c: 0x0  nop
    ctx->pc = 0x1ce82cu;
    // NOP
label_1ce830:
    // 0x1ce830: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ce830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ce834: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1ce834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ce838: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x1ce838u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ce83c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ce83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ce840: 0x8f858b2c  lw          $a1, -0x74D4($gp)
    ctx->pc = 0x1ce840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1ce844: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1ce844u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ce848: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE848u;
    {
        const bool branch_taken_0x1ce848 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CE84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE848u;
        // 0x1ce84c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce848) {
            ctx->pc = 0x1CE858u;
            goto label_1ce858;
        }
    }
    ctx->pc = 0x1CE850u;
    // 0x1ce850: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ce850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ce854: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ce854u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ce858:
    // 0x1ce858: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1ce858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ce85c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1ce85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1ce860: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ce860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ce864: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1ce864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1ce868: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ce868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ce86c: 0x8f858b28  lw          $a1, -0x74D8($gp)
    ctx->pc = 0x1ce86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x1ce870: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1ce870u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ce874: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE874u;
    {
        const bool branch_taken_0x1ce874 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE874u;
        // 0x1ce878: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce874) {
            ctx->pc = 0x1CE884u;
            goto label_1ce884;
        }
    }
    ctx->pc = 0x1CE87Cu;
    // 0x1ce87c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ce87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ce880: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ce880u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ce884:
    // 0x1ce884: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1ce884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ce888: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1ce888u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ce88c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ce88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ce890: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1ce890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1ce894: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1ce894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ce898: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1ce898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1ce89c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1ce89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce8a0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1ce8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1ce8a4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1ce8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1ce8a8: 0xaf838b28  sw          $v1, -0x74D8($gp)
    ctx->pc = 0x1ce8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 3));
    // 0x1ce8ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ce8acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce8b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ce8b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce8b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ce8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8B8u;
        // 0x1ce8bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE8C0u;
}
